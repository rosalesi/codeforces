#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sameCount = 0;
        for (int i = 1; i <= n; i++) {
            int num; cin >> num;
            if (num == i) sameCount++;
        }
        
        cout << (sameCount % 2 == 0 ? sameCount / 2 : sameCount / 2 + 1) << endl;
    }
    return 0;
}