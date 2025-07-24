// problem A Round 944 (Div. 4)

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    int t, x, y, min, max;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        if (x <= y) {
            min = x;
            max = y;
        }
        else {
            min = y;
            max = x;
        }

        cout << min << " " << max << endl;

    }

    return 0;
}


//````the link : https://codeforces.com/problemset/problem/1971/A
