#include <bits/stdc++.h>
using namespace std;

int main() {
    string a; cin >> a;
    string b; cin >> b;
    
    if(a.length() != b.length()) {
        cout << max(a.length(), b.length()) << endl;
    } else if(a == b) {
        cout << -1;
    } else {
        cout << a.length();
    }
}
