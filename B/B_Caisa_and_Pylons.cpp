#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    int ans = 0;
    int prev = 0;
    int energy = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        energy += prev - num;
        if (energy < 0)
        {
            ans += 0 - energy;
            energy = 0;
        }
        prev = num;
    }

    cout << abs(ans);

    return 0;
}