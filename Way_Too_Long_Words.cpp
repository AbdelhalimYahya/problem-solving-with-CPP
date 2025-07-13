// problem A Round 65 (Div. 2)

#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;

		if (word.length() <= 10) {
			cout << word << endl;
		}
		else {
			cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
		}
	}

	return 0;
}



//````the link : https://codeforces.com/problemset/problem/71/A
