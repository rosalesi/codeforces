#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n] = { 0 };

    int min = INT_MAX;
    int minIdx = 0;

    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        arr[i] = arr[i - 1] + num;
        if (i >= k)
        {
            int lIdx = 0;
            if (i - k > 0)
            {
                lIdx = arr[i - k];
            }
            int sum = arr[i] - lIdx;
            if (sum < min)
            {
                min = sum;
                minIdx = (i - k) + 1;
            }
        }
    }

    cout << minIdx;

    return 0;
}