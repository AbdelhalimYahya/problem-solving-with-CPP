// problem A Round 161 (Div. 2)

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

int main() {
    int matrix[5][5];

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
        }
    }

    pair<int, int> theOne;

    // Detect the position of '1'
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (matrix[i][j] == 1) {
                theOne = make_pair(i, j);
            }
        }
    }

	//cout << theOne.first << " " << theOne.second << endl;

    if (theOne.first == 2 && theOne.second == 2) {
        cout << 0 << endl;
	} else {
        int moves = abs(theOne.first - 2) + abs(theOne.second - 2);
        cout << moves << endl;
	}

    return 0;
}



//````the link : https://codeforces.com/problemset/problem/263/A
