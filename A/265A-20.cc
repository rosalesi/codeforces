#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string t; cin >> t;
    
    int idx = 0;
    for(int i = 0; i < t.length(); i++) {
        if(t[i] == s[idx]){
            idx += 1;
        }
    }
    cout << idx + 1;
}
