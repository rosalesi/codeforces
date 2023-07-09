#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    int arr[n];

    for (int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int maxDiff = max(arr[0], l - arr[n - 1]) * 2;
    for (int i = 0; i < n - 1; i++)
    {
        int delta = arr[i + 1] - arr[i];
        if (delta > maxDiff)
        {
            maxDiff = delta;
        }
    }

    cout << fixed << setprecision(10) << maxDiff / 2.0;
    return 0;
}
