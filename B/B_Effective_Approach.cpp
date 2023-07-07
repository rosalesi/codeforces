#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, v, p;
    cin >> n;

    long long arr[n];

    map<int, int> nums;

    for (int i = 1; i <= n; i++)
    {
        long long num;
        cin >> num;
        if (nums.find(num) == nums.end())
        {
            nums[num] = 0;
        }
        nums[num] = i;
    }

    cin >> m;
    v = 0;
    p = 0;
    for (int i = 0; i < m; i++)
    {
        long long num;
        cin >> num;

        long long pos = nums[num];

        v += pos;
        p += (n - pos) + 1;

    }

    cout << v << " " << p;
}
