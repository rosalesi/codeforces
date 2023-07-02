#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m; cin >> m;
    int x, y, up, down;
    for(int i = 0; i < m; i++){
        cin >> x;
        cin >> y;
        up = y - 1;
        down = arr[x - 1] - y;
        arr[x - 1] = 0;
        if(x >= 2) {
            arr[x - 2] += up;
        }
        if(x < n){
            arr[x] += down;
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}
