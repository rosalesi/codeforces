#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    
    set<int> nums;
    
    for(int i = 0; i < 2; i++) {
        int p; cin >> p;
        for(int j = 0; j < p; j++) {
            int num; cin >> num;
            if(nums.find(num) == nums.end()) {
                nums.insert(num);
            }
        }
    }
    
    if(nums.size() == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}
