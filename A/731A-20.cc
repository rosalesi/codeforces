#include <bits/stdc++.h>
using namespace std;

int main() {
    string name; cin >> name;
    int start = 0;
    int steps = 0;
    for(int i = 0; i < name.length(); i++) {
        int idx = name[i] - 97;
        int distance = abs(idx - start);
        if(distance > 13) {
            steps += 26 - distance;
        } else {
            steps += distance;
        }
        start = idx;
    }
    cout << steps;
}
