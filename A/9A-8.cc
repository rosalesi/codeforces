#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int y; cin >> y;
    int w; cin >> w;
    int lead = max(y, w);
    int a = 7 - lead;
    int b = 6;
    
    while(b % a == 0 && a != 1) {
        b = b / a;
        a = 1;
    }
    
    if(a % 2 == 0 && b % 2 == 0) {
        a = a / 2;
        b = b / 2;
    }
    
    cout << a << "/" << b; 
}
