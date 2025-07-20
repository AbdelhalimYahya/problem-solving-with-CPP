// problem A Round 197 (Div. 2)

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string operation;
    cin >> operation;

    vector<string> digits;
    vector<char> characters;

    for (char ch : operation) {
        if (isdigit(ch)) {
            digits.push_back(string(1, ch));
        }
        else if (ch == '+') {
            characters.push_back(ch);
        }
    }

    // Sort digits in ascending order
    sort(digits.begin(), digits.end());

    for (size_t i = 0; i < digits.size(); ++i) {
        cout << digits[i];
        if (i != digits.size() - 1) {
            cout << "+";
        }
    }
    cout << endl;

    return 0;
}


//````the link : https://codeforces.com/problemset/problem/339/A
