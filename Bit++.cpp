// problem A Round 173 (Div. 2)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int n , result;
    cin >> n;
    result = 0;

    while (n--) {

        string statement;
        cin >> statement;

        if (statement[1] == '+') {
            result++;
        }
        else {
            result--;
        }

    }

    cout << result;

    return 0;
}



//````the link : https://codeforces.com/problemset/problem/282/A
