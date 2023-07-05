#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;

    string invertedNum = "";

    bool hasPrevNonZero = false;

    for (int i = 0; i < num.length(); i++)
    {
        char c = num[i];
        int n = c - '0';

        if (n == 9)
        {
            if (hasPrevNonZero)
            {
                invertedNum += '0';
            }
            else
            {
                invertedNum += '9';
                hasPrevNonZero = true;
            }
        }
        else if (n > 4)
        {
            invertedNum += to_string(9 - n);
            hasPrevNonZero = true;
        }
        else
        {
            invertedNum += to_string(n);
            hasPrevNonZero = true;
        }
    }

    invertedNum.erase(0, invertedNum.find_first_not_of('0'));

    if (invertedNum == "")
    {
        cout << 0;
    }
    else
    {
        cout << invertedNum;
    }



    return 0;
}