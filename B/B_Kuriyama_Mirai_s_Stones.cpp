#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    long long prefixSumArr[n];

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (i == 0)
        {
            prefixSumArr[i] = num;
        }
        else
        {
            prefixSumArr[i] = prefixSumArr[i - 1] + num;
        }
        arr[i] = num;
    }

    sort(arr, arr + n);
    long long sortedPreSumArr[n];
    sortedPreSumArr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        sortedPreSumArr[i] = arr[i] + sortedPreSumArr[i - 1];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        long long type, l, r;
        cin >> type >> l >> r;

        long long sum = 0;
        if (type == 1)
        {
            long long leftSum = 0;
            if (l - 2 >= 0)
            {
                leftSum = prefixSumArr[l - 2];
            }
            sum = prefixSumArr[r - 1] - leftSum;
        }
        else
        {
            long long leftSum = 0;
            if (l - 2 >= 0)
            {
                leftSum = sortedPreSumArr[l - 2];
            }
            sum = sortedPreSumArr[r - 1] - leftSum;
        }
        cout << sum << endl;
    }

    return 0;
}