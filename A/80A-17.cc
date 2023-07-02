#include <bits/stdc++.h>
using namespace std;
 
 
bool isPrime(int num) {
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}
 
int main() {
    int n, m; cin >> n >> m;
    int nextPrime = 0;
    
    for(int i = n + 1; i <= m; i ++) {
        if(isPrime(i)) {
            nextPrime = i;
            break;
        }
    }
    
    if(nextPrime == m) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
