#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    string stones; cin >> stones;
    char last = stones[0];
    int ans = 0;
    for(int i = 1; i < n; i++) {
        if(stones[i] == last) {
            ans += 1;
        }
        last = stones[i];
    }
    cout << ans;
}
