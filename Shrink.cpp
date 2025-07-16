// problem B Round 1029 (Div. 3)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int t;
	cin >> t;

    while (t--) {
        
		int n;
        cin >> n;
        
        if (n == 3) {
			cout << "1 3 2" << endl;
		}
        else if (n > 3) {
        
            cout << "1 ";

            for (int i = 0; i < (n - 2); i++) {
				cout << (i + 3) << " ";
            }

            cout << "2" << endl;

        }

	}

    return 0;
}



//````the link : https://codeforces.com/problemset/problem/2117/B
