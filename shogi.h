#pragma once
#include <string>
#include <vector>

namespace shogi {
	enum class Koma {
		s_fu, s_kyou, s_kei, s_gin, s_kaku, s_hi, s_kin, s_ou,
		s_nFu, s_nKyou, s_nKei, s_nGin, s_nKaku, s_nHi,
		g_fu, g_kyou, g_kei, g_gin, g_kaku, g_hi, g_kin, g_ou,
		g_nFu, g_nKyou, g_nKei, g_nGin, g_nKaku, g_nHi,
		none
	};

	class Field {
	public:
		void setPosition(std::vector<std::string> tokens);
	private:
		Koma koma[9 + 1][9 + 1];

		void initialize();

		void moveKoma(const std::string token);
	};
}
