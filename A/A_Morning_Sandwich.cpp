#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, c, h;
        cin >> b >> c >> h;

        int filling = c + h;

        vector<char> sandwich;
        sandwich.push_back('b');
        b--;
        while (b > 0 && filling > 0) {
            char end = sandwich[sandwich.size() - 1];
            if (end == 'b') {
                sandwich.push_back('f');
                filling--;
            } else if (end == 'f') {
                sandwich.push_back('b');
                b--;
            }
        }

        if (sandwich[sandwich.size() - 1] == 'f') {
            sandwich.push_back('b');
        }

        cout << sandwich.size() << endl;
    }
    return 0;
}