#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> nums;

    for (int i = 0; i < 2 * n + 1; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    cout << nums.at(0) << " ";

    for (int i = 1; i < (2 * n); i++)
    {
        int num = nums.at(i);
        int prev = nums.at(i - 1);
        int after = nums.at(i + 1);

        if (i % 2 != 0 
            && num > prev 
            && num > after 
            && k > 0
            && num - prev > 1
            && num - after > 1)
        {
            cout << num - 1;
            k -= 1;
        }
        else
        {
            cout << num;
        }

        if (i != 2 * n)
        {
            cout << " ";
        }
    }

    cout << nums.at(nums.size() - 1);
}