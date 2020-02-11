#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include "getBestMove.h"
#include "shogi.h"
using namespace std;

//message to gui
inline void mtg(string s) {
	cout << s << endl;
}

void choiceAction(const vector<string> const &tokens) {
	static shogi::Field field;

	//何も受信できなかったら再び待つ
	if (tokens.empty()) {
		return;
	}

	string o = tokens[0];

	//通信開始時
	if (o == "usi") {
		mtg("id name kumesan'sShogi");
		mtg("id author kumesan");

		mtg("usiok");
	}
	else if (o == "isready") {
		mtg("readyok");
	}
	else if (o == "position") {
		field.setPosition(tokens);
	}
	else if (o == "go") {
		mtg(getBestMove(tokens));
	}
}

void getGUIMessage(vector<string> &tokens) {
	string usiIn;
	//GUIから受信
	getline(cin, usiIn);

	//vector<string> tokens;
	stringstream sts(usiIn);
	string token;
	//GUIから受信した文字列を空白で区切る
	while (getline(sts, token, ' ')) {
		tokens.push_back(token);
	}
}

int main(void) {
	while (true) {
		//GUIから受信
		vector<string> tokens;
		getGUIMessage(tokens);

		//受信した内容によって動作を決定する
		choiceAction(tokens);
	}

	return 0;
}
