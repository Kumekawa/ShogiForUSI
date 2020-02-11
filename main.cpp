#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

//message to gui
inline void mtg(string s) {
	cout << s << endl;
}

void choiceAction(const vector<string> const &tokens) {
	//������M�ł��Ȃ�������Ăё҂�
	if (tokens.empty()) {
		return;
	}

	string o = tokens[0];

	//�ʐM�J�n��
	if (o == "usi") {
		mtg("id name kumesan'sShogi");
		mtg("id author kumesan");

		mtg("usiok");
	}
	else if (o == "isready") {
		mtg("readyok");
	}
	else if (o == "go") {
		mtg("bestmove 3c3d");
	}
}

void getGUIMessage(vector<string> &tokens) {
	string usiIn;
	//GUI�����M
	getline(cin, usiIn);

	//vector<string> tokens;
	stringstream sts(usiIn);
	string token;
	//GUI�����M������������󔒂ŋ�؂�
	while (getline(sts, token, ' ')) {
		tokens.push_back(token);
	}
}

int main(void) {
	while (true) {
		//GUI�����M
		vector<string> tokens;
		getGUIMessage(tokens);

		//��M�������e�ɂ���ē�������肷��
		choiceAction(tokens);
	}

	return 0;
}
