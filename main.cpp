#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	while (true) {
		string usiIn;
		getline(cin, usiIn);

		vector<string> tokens;
		stringstream sts(usiIn);
		string token;
		while (getline(sts, token, ' ')) {
			tokens.push_back(token);
		}
		if (tokens.empty()) {
			continue;
		}
		if (tokens[0] == "usi") {
			cout << "id name kumekawa'sShogi" << endl;
			cout << "id author kumekawa" << endl;

			cout << "usiok" << endl;
		}
	}

	return 0;
}
