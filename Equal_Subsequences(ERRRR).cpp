// problem A Round 1030 (Div. 2)

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

// Generates a random binary string of length n, using only 001, 100, or 101 patterns,
// and containing exactly k '1's.
string generateString(int n, int k) {
    vector<string> patterns = { "001", "100", "101" };
    string result;
    int ones_left = k;
    int pos = 0;
    mt19937 rng(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<int> dist(0, 2);

    while (pos + 3 <= n) {
        vector<string> valid_patterns;
        for (const auto& pat : patterns) {
            int ones_in_pat = count(pat.begin(), pat.end(), '1');
            if (ones_in_pat <= ones_left && (n - (pos + 3)) >= (ones_left - ones_in_pat)) {
                valid_patterns.push_back(pat);
            }
        }
        if (valid_patterns.empty()) break;
        string chosen = valid_patterns[dist(rng) % valid_patterns.size()];
        result += chosen;
        ones_left -= count(chosen.begin(), chosen.end(), '1');
        pos += 3;
    }
    // Fill remaining positions with '0' or '1' as needed
    while (result.size() < n) {
        if (ones_left > 0) {
            result += '1';
            ones_left--;
        }
        else {
            result += '0';
        }
    }
    // If too many '1's, replace extra '1's with '0's from the end
    for (int i = result.size() - 1; i >= 0 && ones_left < 0; --i) {
        if (result[i] == '1') {
            result[i] = '0';
            ones_left++;
        }
    }
    return result;
}

int main() {

    int test;
    cin >> test;

    while (test--) {
        int n, k;
        cin >> n >> k;
        string s = generateString(n, k);
        cout << s << endl;
    }

    return 0;
}



//````the link : https://codeforces.com/problemset/problem/2118/A
