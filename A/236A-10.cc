#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string name; cin >> name;
    set<char> letters;
    for(int i = 0; i < name.length(); i++) {
        if(letters.find(name[i]) == letters.end()){
            letters.insert(name[i]);
        }
    }
    if(letters.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}
