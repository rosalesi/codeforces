#include <bits/stdc++.h>
using namespace std;

int digitSum(string num)
{
    int sum = 0;
    for (char c : num)
    {
        sum += (c - '0');
    }
    return sum;
}

int findSpellCount(int num)
{
    if (num < 10)
    {
        return 0;
    }
    else
    {
        return 1 + findSpellCount(digitSum(to_string(num)));
    }
}

int main()
{
    string nums;
    cin >> nums;

    if (nums.length() < 2)
    {
        cout << 0;
    }
    else
    {
        cout << 1 + findSpellCount(digitSum(nums));
    }
}