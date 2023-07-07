#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = 0;
    int currCount = 0;
    int prev = 0;
    int distFromLastHeight = 0;
    bool increasing = true;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        currCount += 1;
        if (increasing)
        {
            if (num < prev)
            {
                increasing = false;
                distFromLastHeight = 1;
            }
        }
        else
        {
            if (num < prev)
            {
                distFromLastHeight = 1;
            }
            else if (num > prev)
            {
                increasing = true;
                currCount = distFromLastHeight + 1;
                distFromLastHeight = 0;
            }
            else
            {
                distFromLastHeight += 1;
            }
        }

        if (currCount > max)
        {
            max = currCount;
        }

        prev = num;
    }

    cout << max;
    return 0;
}