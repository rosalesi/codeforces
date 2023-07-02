#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    int event;
    int ans = 0;
    int cops = 0;
    for(int i = 0; i < n; i++) {
        cin >> event;
        if(event > 0) {
            cops += event;
        } else {
            if(cops < 1) {
                ans += 1;
            } else {
                cops -= 1;
            }
        }
    }
    cout << ans;
}
