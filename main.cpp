#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void choiceAction(const vector<string> const &tokens) {
	//������M�ł��Ȃ�������Ăё҂�
	if (tokens.empty()) {
		return;
	}

	//�ʐM�J�n��
	if (tokens[0] == "usi") {
		cout << "id name kumesan'sShogi" << endl;
		cout << "id author kumesan" << endl;

		cout << "usiok" << endl;
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
