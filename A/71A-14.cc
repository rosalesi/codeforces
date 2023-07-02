#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    string word;
    for(int i = 0; i < n; i++) {
        cin >> word;
        if(word.length() > 10) {
            word = string(1, word[0]) + to_string(word.length() - 2) + string(1, word[word.length() - 1]);
        }
        cout << word << endl;
    }
}
