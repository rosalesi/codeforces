#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    string last; cin >> last;
    int ans = 1;
    for(int i = 1; i < n; i++) {
        string magnet; cin >> magnet;
        if(magnet != last) {
            last = magnet;
            ans += 1;
        }
    }
    cout << ans;
}
