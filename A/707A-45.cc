#include <bits/stdc++.h>
using namespace std;

void solve() {

}

int main() {
    int n, m; cin >> n >> m;
    bool colored = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char letter; cin >> letter;
            if(letter == 'C' || letter == 'M' || letter == 'Y') {
                colored = true;
            } 
        }
    }
    if(colored) {
        cout << "#Color";
    } else {
        cout << "#Black&White";
    }
}
