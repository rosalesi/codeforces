#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> shoes;
    int shoe;
    int count = 0;
    for(int i = 0; i < 4; i++) {
        cin >> shoe;
        if(shoes.find(shoe) != shoes.end()) {
            count += 1;
        } else {
            shoes.insert(shoe);
        }
    }
    cout << count;
}
