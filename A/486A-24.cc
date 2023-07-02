#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin >> n;
    
    /*
    *  n      f(f)
    *  1        -1
    *  2        1
    *  3        -2
    *  4        2
    *  5        -3
    *  6        3
    *  7        -4
    *  8        4
    *  9        -5
    * 10        5
    */
    
    long long shift = n/2;
    if(n % 2 != 0) {
        cout << "-" << n - shift; 
    } else {
        cout << n - shift;
    }
    
}
