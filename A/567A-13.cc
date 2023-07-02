#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int minDist, maxDist;
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            minDist = abs(arr[1] - arr[0]);
        } else if(i == n - 1) {
            minDist = abs(arr[n-2] - arr[i]);
        } else {
            minDist = min(abs(arr[i - 1] - arr[i]), abs(arr[i + 1] - arr[i]));
        }
        maxDist = max(abs(arr[0] - arr[i]), abs(arr[n -1] - arr[i]));
        cout << minDist << " " << maxDist << endl;
    }
}
