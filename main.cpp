#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	while (true) {
		string usiIn;
		//GUI�����M
		getline(cin, usiIn);

		vector<string> tokens;
		stringstream sts(usiIn);
		string token;
		//GUI�����M������������󔒂ŋ�؂�
		while (getline(sts, token, ' ')) {
			tokens.push_back(token);
		}
		//������M�ł��Ȃ�������Ăё҂�
		if (tokens.empty()) {
			continue;
		}
		//��M���e�ɂ���ē���ύX
		if (tokens[0] == "usi") {
			cout << "id name kumesan'sShogi" << endl;
			cout << "id author kumesan" << endl;

			cout << "usiok" << endl;
		}
	}

	return 0;
}
