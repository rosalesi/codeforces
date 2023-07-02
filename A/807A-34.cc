#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    bool nonIncreasing = true;
    int last = 4127;
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        if(b != a) {
            cout << "rated";
            return 0;
        }
        if (a > last) {
            nonIncreasing = false;
        }
        last = a;
    }
    if(nonIncreasing) {
        cout << "maybe";
    } else {
        cout << "unrated";
    }
}
