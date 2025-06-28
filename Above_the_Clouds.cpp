// problem B Round 1032 (Div. 3)

#include <iostream>
#include <string>
//#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    int n;
    cin >> n >> s;
    int fr[26]{};
    for (int i = 0; i < n; i++) {
        fr[s[i] - 'a']++;
    }

    for (int i = 1; i < n - 1; i++) {
        if (fr[s[i] - 'a'] > 1) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
#ifdef PRADY
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t T = clock();
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

#ifdef PRADY
    cout << "\nTime taken: " << ((float)(clock() - T)) / CLOCKS_PER_SEC << " seconds";
#endif
    return 0;
}

//#include <iostream>
//#include <string>
//using namespace std;
//
//bool solve(const string& s) {
//    int n = s.size();
//    // Check all possible splits where a and c are non-empty
//    // and b has at least 1 character
//
//    // Case 1: a is first character, c is last character
//    if (n >= 3) {
//        char a = s[0];
//        char c = s.back();
//        string b_middle = s.substr(1, n - 2);
//        if ((string(1, a) + string(1, c)).find(b_middle) != string::npos) {
//            return true;
//        }
//    }
//
//    // Case 2: a is first two characters, c is last character
//    if (n >= 4) {
//        string a_start = s.substr(0, 2);
//        char c_end = s.back();
//        string b_middle = s.substr(2, n - 3);
//        if ((a_start + string(1, c_end)).find(b_middle) != string::npos) {
//            return true;
//        }
//    }
//
//    // Case 3: a is first character, c is last two characters
//    if (n >= 4) {
//        char a_start = s[0];
//        string c_end = s.substr(n - 2, 2);
//        string b_middle = s.substr(1, n - 3);
//        if ((string(1, a_start) + c_end).find(b_middle) != string::npos) {
//            return true;
//        }
//    }
//
//    return false;
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        string s;
//        cin >> s;
//
//        if (n == 3) {
//            // Special case for length 3
//            if (s[0] == s[2] && s[1] == s[0]) {
//                cout << "YES\n";
//            }
//            else {
//                cout << "NO\n";
//            }
//        }
//        else {
//            cout << (solve(s) ? "YES" : "NO") << '\n';
//        }
//    }
//
//    return 0;
//}



//````the link : https://codeforces.com/problemset/problem/2121/B
