#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int calories[4];
    for(int i = 0; i < 4; i++){
        cin >> calories[i];
    }
    
    string seconds; cin >> seconds;
    int ans = 0;
    for(int i = 0; i < seconds.length(); i++) {
        ans += calories[(seconds[i] - '0') - 1];
    }
    cout << ans;
}
