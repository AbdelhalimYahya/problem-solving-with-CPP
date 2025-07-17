// problem A Round 143 (Div. 2)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int p;
    cin >> p;

    int solved_problem = 0;


    while (p--) {
        
        int Petya, Vasya, Tonya;
        cin >> Petya >> Vasya >> Tonya;

        if ((Petya + Vasya + Tonya) >= 2) {
            solved_problem++;
        }

    }

    cout << solved_problem << endl;

    return 0;
}



//````the link : https://codeforces.com/problemset/problem/231/A
