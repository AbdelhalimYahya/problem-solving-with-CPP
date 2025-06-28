// problem A Round 1029 (Div. 3)

#include <iostream>
#include <string>
//#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while (tc--) {
		int n, k; cin >> n >> k;
		int first1 = -1, last1 = -1;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			if (x == 1 && first1 == -1) first1 = i;
			if (x == 1) last1 = i;
		}

		if (first1 == -1 || last1 - first1 + 1 <= k) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}



//````the link : https://codeforces.com/problemset/problem/2117/A
