#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


bool isSolvable(vector<char> squares) {

    int blackCount = 0;
    int whiteCount = 0;
    for (char c : squares)
    {
        if (c == '#')
        {
            blackCount += 1;
        }
        else
        {
            whiteCount += 1;
        }
    }

    return blackCount >= 3 || whiteCount >= 3;
}

void solve() {

    vector<vector<char>> test;
    for (int i = 0; i < 4; i++)
    {
        string row;
        vector<char> testRow;
        cin >> row;
        for (char c : row)
        {
            testRow.push_back(c);
        }
        test.push_back(testRow);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vector<char> testVector;
            testVector.push_back(test.at(i).at(j));
            testVector.push_back(test.at(i).at(j + 1));
            testVector.push_back(test.at(i + 1).at(j));
            testVector.push_back(test.at(i + 1).at(j + 1));
            if (isSolvable(testVector))
            {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}