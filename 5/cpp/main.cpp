#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void checkEvenOdd(string s);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    int i, t;
    cin >> t;
    
    for (i = 0; i < t; ++i) {
        getline(cin >> ws, s);
        checkEvenOdd(s);
    }
    
    return 0;
}

void checkEvenOdd(string s) {
    string evenS = "";
    string oddS = "";
    for (int i = 0; i < s.length(); ++i) {
        if (i % 2 == 0) {
            evenS += s[i];
        } else {
            oddS += s[i];
        }
    }
    
    cout << evenS << " " << oddS << endl;
}
