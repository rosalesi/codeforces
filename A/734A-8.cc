#include<iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int a = 0, d = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'A'){
            a += 1;
        } else {
            d +=1;
        }
    }
    if(a > d) {
        cout<<"Anton";
    } else if(d > a) {
        cout<<"Danik";
    } else {
        cout << "Friendship";
    }
}
