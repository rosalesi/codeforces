#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k; cin >> n >> k;
    int iter = -1;
    string nums = "0123456789";
    
    int count = 0;
    for(int i = 0; i < n; i++) {
        string line;
        cin >> line;
        
        count += 1;
        for(int j = 0; j <= k; j++) {
            iter = line.find(nums[j]);
            if(iter == -1) {
                count -= 1;
                break;
            }
        }
    }
    cout << count;
}
