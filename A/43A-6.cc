#include <bits/stdc++.h>
using namespace std;
 
 
void solve(vector<string> words) {
    string first = words[0];
    string second;
    int a = 1, b = 0;
    for(int i = 1; i < words.size(); i++) {
        if(words[i] == first) {
            a += 1;
        }  else {
            second = words[i];
            b += 1;
        }
    }
    if(a > b) {
        cout << first;
    } else {
        cout << second;
    }
}
 
int main() {
    int n; cin >> n;
    vector<string> teams;
    for(int i = 0; i < n; i++) {
        string word; cin >> word;
        teams.push_back(word);
    }
    solve(teams);
}
