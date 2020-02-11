#include "getBestMove.h"
using namespace std;

namespace shogi{
	enum class Koma {
		s_fu,s_kyou,s_kei,s_gin,s_kaku,s_hi,s_kin,s_ou,
		s_nFu,s_nKyou,s_nKei,s_nGin,s_nKaku,s_nHi,
		g_fu,g_kyou,g_kei,g_gin,g_kaku,g_hi,g_kin,g_ou,
		g_nFu,g_nKyou,g_nKei,g_nGin,g_nKaku,g_nHi
	};

	class Field{
	public:
		Field() {
			initialize();
		}
		Field(vector<string> tokens) {
			initialize();

		}
	private:
		Koma koma[9 + 1][9 + 1];

		void initialize() {
			//ïàñ Çèâä˙âª
			//å„éË
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

			//êÊéË
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

		void moveKoma(const string token) {
			int s[4]{
				token.c_str()[0] - '0',
				token.c_str()[1],
				token.c_str()[2],
				token.c_str()[3],
			};


		}
	};
}

string getBestMove(vector<string> tokens) {
	return "bestmove 3c3d";
}
