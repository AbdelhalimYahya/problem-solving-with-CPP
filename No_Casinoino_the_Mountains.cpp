// problem A Round 964 (Div. 4)

#include <iostream>
using namespace std;
 
int main() {
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        int first = n % 10;
        int sec = n / 10;
        
        cout << first + sec << endl;
    }
 
    return 0;
}

// the link : https://codeforces.com/problemset/problem/1999/A
