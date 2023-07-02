#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, t, k, d; cin >> n >> t >> k >> d;
    int timeNoOven;
    int cakesNoOven;
    if(n % k == 0) {
        timeNoOven = (n / k) * t;
        cakesNoOven = n;
    } else {
        timeNoOven = ((n / k) + 1) * t;
        cakesNoOven = (timeNoOven / t) * k;
    }
    
    
    if (timeNoOven - d > t) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
