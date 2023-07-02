#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string word; cin >> word;
    set<char> letters;
    for(int i = 0; i < n; i++) {
        if(letters.find(tolower(word[i])) == letters.end()) {
            letters.insert(tolower(word[i]));
        }
    }
    
    bool panagram = letters.size() == 26;
    if(panagram) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
