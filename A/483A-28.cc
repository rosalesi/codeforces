#include <bits/stdc++.h>
using namespace std; 

int main() {
    long long a, c; cin >> a >> c;
    long long b;
    
    if(a % 2 != 0) {
        a += 1;
    }
    if(c - a < 2) {
        cout << -1;
        return 0;
    }
    
    cout << a << " " << a + 1 << " " << a + 2;
    
    
    return 0;
}
