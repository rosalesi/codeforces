#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, f;
    cin >> n >> f;

    long long ans = 0;
    vector<long long> diffs;
    for (int i = 0; i < n; i++)
    {
        int k, l;;
        cin >> k >> l;

        long long realVal = k >= l ? l : k;
        long long maxVal = k >= l ? l : k * 2 >= l ? l : k * 2;
        long long diff = max(0LL, maxVal - realVal);

        ans += realVal;
        diffs.push_back(diff);
    }

    sort(diffs.begin(), diffs.end());

    for (int i = 1; i <= f; i++)
    {
        ans += diffs[diffs.size() - i];
    }

    cout << ans;
    return 0;
}