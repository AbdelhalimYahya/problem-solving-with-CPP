// problem B Round 944 (Div. 4)

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> results;

    while (t--) {
        string s;
        cin >> s;

        // Check if all characters in s are the same
        bool all_same = true;
        for (char c : s) {
            if (c != s[0]) {
                all_same = false;
                break;
            }
        }

        if (all_same) {
            results.push_back("NO");
        }
        else {

            // Try to find a different permutation
            string original = s;
            bool found = false;

            // Generate permutations and find one that is different
            sort(s.begin(), s.end());
            do {
                if (s != original) {
                    results.push_back("YES");
                    results.push_back(s);
                    found = true;
                    break;
                }
            } while (next_permutation(s.begin(), s.end()));

            if (!found) {
                results.push_back("NO");
            }
        }
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}


//````the link : https://codeforces.com/problemset/problem/1971/B
