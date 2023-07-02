#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int ans = 0;
    int num;
    for(int i = 1; i <= 5; i ++) {
        for(int j = 1; j <= 5; j ++) {
            cin >> num;
            if(num == 1) {
                cout << abs(3 - i) + abs(3 - j);
            }
        }
    }
}
