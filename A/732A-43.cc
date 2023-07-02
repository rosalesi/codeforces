#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k; cin >> k;
    int r; cin >> r;
    int count = 1;
    int sum = k;
    while(sum % 10 != 0 && (sum - r) % 10 != 0) {
        sum += k;
        count += 1;
    }
    cout << count;
}
