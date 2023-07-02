#include <bits/stdc++.h>
using namespace std;
 
int main() {
    set<char> letters;
    string el;
    char letter;
    
    
    for(int i = 0; i < 1000; i++) {
        cin >> el;
        
        if(el[0] == '{' && el[1] == '}') {
            cout << 0;
            return 0;
        }
        
        if(el[0] == '{') {
            letter = el[1];
        } else {
            letter = el[0];
        }
        if(letters.find(letter) == letters.end()) {
            letters.insert(letter);
        }
        if(el[1] == '}') {
            break;
        }
    }
    
    cout << letters.size();;
}
