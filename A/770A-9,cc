#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k; cin >> n >> k;
    
    int ak = k;
    vector<char> chars;
    char letter = static_cast<char>('a' - 1);
    for(int i = 0; i < n; i++) {
        if(k > 0) {
            letter = static_cast<char>(letter + 1);
            k -= 1;
            chars.push_back(letter);
            cout << letter;
        } else {
            letter = static_cast<char>(chars[chars.size() - ak]);
            chars.push_back(letter);
            cout << letter;
        }
    }
}
