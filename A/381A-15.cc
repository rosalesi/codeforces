#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    int a = 0, b = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int p1 = 0, p2 = n - 1;
    for(int i = 0; i < n; i++) {
        int num = max(arr[p1], arr[p2]);
        if(i % 2 == 0) {
            a += num;
        } else {
            b += num;
        }
        if(arr[p1] == num) {
            p1 += 1;
        } else {
            p2 -= 1;
        }
    }
    
    cout << a << " " <<  b;
}
