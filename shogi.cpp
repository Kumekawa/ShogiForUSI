#include "shogi.h"
using namespace std;

void shogi::Field::setPosition(vector<string> tokens) {
	for (int i = 1; i < tokens.size(); ++i) {
		if (tokens[i] == "startpos") {
			initializePos();
		}
		else if (tokens[i] != "moves") {
			moveKoma(tokens[i]);
		}
	}
}

void shogi::Field::initializePos() {
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			koma[i][j] = Koma::none;
		}
	}

	//譜面を初期化
	//後手
	koma[1][1] = Koma::g_kyou;
	koma[1][2] = Koma::g_kei;
	koma[1][3] = Koma::g_gin;
	koma[1][4] = Koma::g_kin;
	koma[1][5] = Koma::g_ou;
	koma[1][6] = Koma::g_kin;
	koma[1][7] = Koma::g_gin;
	koma[1][8] = Koma::g_kei;
	koma[1][9] = Koma::g_kyou;

	koma[2][2] = Koma::g_kaku;
	koma[2][8] = Koma::g_hi;

	for (int i = 1; i <= 9; ++i) {
		koma[3][i] = Koma::g_fu;
	}

	//先手
	koma[9][1] = Koma::s_kyou;
	koma[9][2] = Koma::s_kei;
	koma[9][3] = Koma::s_gin;
	koma[9][4] = Koma::s_kin;
	koma[9][5] = Koma::s_ou;
	koma[9][6] = Koma::s_kin;
	koma[9][7] = Koma::s_gin;
	koma[9][8] = Koma::s_kei;
	koma[9][9] = Koma::s_kyou;

	koma[8][2] = Koma::s_hi;
	koma[8][8] = Koma::s_kaku;

	for (int i = 0; i < 9; ++i) {
		koma[7][i] = Koma::s_fu;
	}
	
}

void shogi::Field::moveKoma(const string token) {
	int s[4]{
		token.c_str()[0] - '0',
		token.c_str()[1] - 'a' + 1,
		token.c_str()[2] - '0',
		token.c_str()[3] - 'a' + 1,
	};

	//とりあえずコマの入手は無視する
	Koma k = koma[s[1]][s[0]];
	koma[s[1]][s[0]] = Koma::none;
	koma[s[3]][s[2]] = k;
}
