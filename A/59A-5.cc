#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string word; cin >> word;
    int pos = 0, neg = 0;
    for(int i = 0; i < word.length(); i ++) {
        if(word[i] == tolower(word[i])) {
            neg += 1;
        } else {
            pos += 1;
        }
    }
    
    if(pos == neg || neg > pos) {
        for(int i = 0; i < word.length(); i++){
            word[i] = tolower(word[i]);
        }
        cout << word;
    } else {
        for(int i = 0; i < word.length(); i++){
            word[i] = toupper(word[i]);
        }
        cout << word;
    }
}
