// problem A Round 1037 (Div. 3)

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int test;
	cin >> test;

	while (test--)
	{
		int n;
		cin >> n;

		string s = to_string(n);

		vector<int> arra;
		
		for (int i = 0 ; i < s.size() ; i++) {
			arra.push_back(n % 10);
			n /= 10;
		}

		int theGreatest = 9;

		for (int i = 0 ; i < s.size() ; i++) {
			if (arra[i] <= theGreatest) {
				theGreatest = arra[i];
			}
		}

		cout << theGreatest << endl;

	}

    return 0;
}


//````the link : https://codeforces.com/problemset/problem/2126/A
