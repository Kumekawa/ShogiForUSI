#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	while (true) {
		string usiIn;
		//GUIから受信
		getline(cin, usiIn);

		vector<string> tokens;
		stringstream sts(usiIn);
		string token;
		//GUIから受信した文字列を空白で区切る
		while (getline(sts, token, ' ')) {
			tokens.push_back(token);
		}
		//何も受信できなかったら再び待つ
		if (tokens.empty()) {
			continue;
		}
		//受信内容によって動作変更
		if (tokens[0] == "usi") {
			cout << "id name kumesan'sShogi" << endl;
			cout << "id author kumesan" << endl;

			cout << "usiok" << endl;
		}
	}

	return 0;
}
