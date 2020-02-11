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

	private:
		Koma koma[9][9];

		void initialize() {
			//ïàñ Çèâä˙âª
			//å„éË
			koma[0][0] = Koma::g_kyou;
			koma[0][1] = Koma::g_kei;
			koma[0][2] = Koma::g_gin;
			koma[0][3] = Koma::g_kin;
			koma[0][4] = Koma::g_ou;
			koma[0][5] = Koma::g_kin;
			koma[0][6] = Koma::g_gin;
			koma[0][7] = Koma::g_kei;
			koma[0][8] = Koma::g_kyou;

			koma[1][1] = Koma::g_hi;
			koma[1][7] = Koma::g_kaku;

			for (int i = 0; i < 9; ++i) {
				koma[2][i] = Koma::g_fu;
			}

			//êÊéË
			koma[8][0] = Koma::s_kyou;
			koma[8][1] = Koma::s_kei;
			koma[8][2] = Koma::s_gin;
			koma[8][3] = Koma::s_kin;
			koma[8][4] = Koma::s_ou;
			koma[8][5] = Koma::s_kin;
			koma[8][6] = Koma::s_gin;
			koma[8][7] = Koma::s_kei;
			koma[8][8] = Koma::s_kyou;

			koma[7][1] = Koma::s_kaku;
			koma[7][7] = Koma::s_hi;
			
			for (int i = 0; i < 9; ++i) {
				koma[6][i] = Koma::s_fu;
			}

		}
	};
}

string getBestMove(vector<string> tokens) {
	return "bestmove 3c3d";
}
