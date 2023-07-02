#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    int n, k;
    int ans;
    int num;
    for(int i = 0; i < t; i++) {
        cin >> n >> k;
        ans = 0;
        for(int j = 0; j < n; j++) {
            cin >> num;
            if(num > k && j < k) {
                ans += 1;
            }
        }
        cout << ans << endl;
    }
}
