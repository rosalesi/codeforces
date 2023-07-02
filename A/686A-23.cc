#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    long long x; cin >> x;
    int distress = 0;
    char cmd;
    long long ic;
    for(int i = 0; i < n; i++) {
        cin >> cmd;
        cin >> ic;
        if(cmd == '+') {
            x += ic;
        } else {
            if(x >= ic) {
                x -= ic;
            } else {
                distress += 1;
            }
        }
    }
    cout << x << " " << distress;
}
