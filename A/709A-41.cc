#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, b, d; cin >> n >> b >> d;
    int ans = 0;
    int orange;
    int juice = 0;
    for(int i = 0; i < n; i++) {
        cin >> orange;
        if(orange <= b) {
            juice += orange;
            if (juice > d){
                juice = 0;
                ans += 1;
            }
        }
    }
    
    cout << ans;
}
