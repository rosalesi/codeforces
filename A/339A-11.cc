#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string expression; cin >> expression;
    vector<int> nums;
    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] != '+') {
            nums.push_back(expression[i] - '0');
        }
    }
    
    sort(nums.begin(), nums.end());
    
    int idx = 0;
    for(int i = 0; i < expression.length(); i++) {
        if(i % 2 == 0){
            cout << nums[idx];
            idx += 1;
        } else {
            cout << "+";
        }
    }
}
