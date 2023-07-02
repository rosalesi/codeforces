#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int ans = 0;
    if(n < 3) {
        cout << ans;
        return 0;
    }
    
    int num;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    
    int numsMin = *min_element(nums.begin(), nums.end());
    int numsMax = *max_element(nums.begin(), nums.end());
    
    for(int i = 0; i < n; i++) {
        if(nums[i] > numsMin && nums[i] < numsMax) {
            ans += 1;
        }
    }
    cout << ans;
}
