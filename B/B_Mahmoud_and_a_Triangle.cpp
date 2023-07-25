#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++)
    {
        int a = nums[i];
        int b = nums[i + 1];
        int c = nums[i + 2];

        if (a + b > c && a + c > b && b + c > a)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}