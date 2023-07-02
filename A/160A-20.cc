#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    vector<int> coins;
    int coin;
    int coinSum = 0;
    for(int i = 0; i < n; i++) {
        cin >> coin;
        coinSum += coin;
        coins.push_back(coin);
    }
    
    sort(coins.begin(), coins.end());
    
    int ans = 0;
    int mySum = coinSum;
    int idx = n - 1;
    while(mySum >= coinSum / 2.0 && idx >= 0) {
        mySum -= coins[idx];
        idx -= 1;
        ans += 1;
    }
    
    cout << ans;
}
