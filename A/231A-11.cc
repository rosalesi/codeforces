#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int p, v, t;
    int ans = 0;
    for(int i = 0; i < n; i ++) {
        cin >> p;
        cin >> v;
        cin >> t;
        
        int sum = p + v + t;
        if(sum >= 2){
            ans += 1;
        }
    }
    cout << ans;
}
