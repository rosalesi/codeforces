#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    int num;
    
    map<int, vector<int>> nums;
    nums.insert(pair<int, vector<int>>(1, vector<int>()));
    nums.insert(pair<int, vector<int>>(2, vector<int>()));
    nums.insert(pair<int, vector<int>>(3, vector<int>()));
    for(int i = 0; i < n; i++) {
        cin >> num;
        nums[num].push_back(i + 1);
    }
    
    int w = min(min(nums[1].size(), nums[2].size()), nums[3].size());
    cout << w << endl;
    for(int i = 0; i < w; i++) {
        cout << nums[1][i] << " " << nums[2][i] << " " << nums[3][i] << endl;
    }
}
