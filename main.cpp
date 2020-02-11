#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void choiceAction(vector<string> tokens) {
	//何も受信できなかったら再び待つ
	if (tokens.empty()) {
		return;
	}

	//通信開始時
	if (tokens[0] == "usi") {
		cout << "id name kumesan'sShogi" << endl;
		cout << "id author kumesan" << endl;

		cout << "usiok" << endl;
	}
}

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
		//受信した内容によって動作を決定する
		choiceAction(tokens);
	}

	return 0;
}
