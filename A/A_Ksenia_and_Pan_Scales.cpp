#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string scale;
    string weights;

    cin >> scale;
    cin >> weights;

    string leftScale = scale.substr(0, scale.find("|"));
    string rightScale = scale.substr(scale.find("|") + 1, scale.length());

    for (char c : weights)
    {
        if (leftScale.length() == rightScale.length())
        {
            leftScale += c;
        }
        else if (leftScale.length() < rightScale.length())
        {
            leftScale += c;
        }
        else
        {
            rightScale += c;
        }
    }

    if (leftScale.length() != rightScale.length())
    {
        cout << "Impossible";
    }
    else
    {
        cout << leftScale << "|" << rightScale;
    }

    return 0;
}