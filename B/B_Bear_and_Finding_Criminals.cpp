#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, a;
    cin >> n >> a;
 
    int arr[101] = {0};
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
 
        int diff = abs(a - i);
        if (i == a && num == 1
            || (num == 1 && (diff + a > n || a - diff < 1)))
        {
            ans += 1;
        }
        else if (arr[diff] == 1 && num == 1)
        {
            ans += 2;
        }
        else if (num == 1)
        {
            arr[diff] = 1;
        }
    }
 
    cout << ans;
    return 0;
}