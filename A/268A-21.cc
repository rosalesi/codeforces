#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    tuple<int, int> teams[n];
    int ans = 0;
    
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        int b; cin >> b;
        teams[i] = make_tuple(a, b);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j ++){
            if(i != j) {
                if(get<0>(teams[i]) == get<1>(teams[j])){
                    ans += 1;
                }
            }
        }
    }
    cout << ans;
}
