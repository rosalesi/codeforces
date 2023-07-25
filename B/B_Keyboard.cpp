#include <bits/stdc++.h>
using namespace std;

double distance(int x1, int x2, int y1, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
    int n, m, x, q;
    cin >> n >> m >> x;

    vector<pair<int, int>> shifts;
    map<char, vector<pair<int, int>>> letters;
    map<char, double> letDists;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == 'S')
            {
                shifts.push_back(make_pair(i, j));
            }
            else
            {
                if (letters.find(c) == letters.end())
                {
                    vector<pair<int, int>> vec;
                    letters[c] = vec;
                }
                letters[c].push_back(make_pair(i, j));
                letDists[c] = 0;
            }
        }
    }

    cin >> q;
    int ans = 0;

    for (int i = 0; i < q; i++)
    {
        char c;
        cin >> c;

        // cout << "char: " << c << endl;

        if (isupper(c))
        {
            c = tolower(c);
            if (shifts.size() == 0 || letters.find(c) == letters.end())
            {
                cout << -1;
                return 0;
            }

            // cout << "Reached isUpper()" << endl;
            if (letDists[c] == 0)
            {
                vector<pair<int, int>> letterCoords = letters[c];
                double minDist = INT_MAX;
                for (pair<int, int> shift : shifts)
                {
                    for (pair<int, int> letterCoord : letterCoords)
                    {
                        // cout << "shift: " << shift.first << " " << shift.second << endl;
                        // cout << "letterCoord: " << letterCoord.first << " " << letterCoord.second << endl;
                        double dist = distance(shift.first, letterCoord.first, shift.second, letterCoord.second);
                        minDist = min(dist, minDist);
                    }
                }
                letDists[c] = minDist;
            }

            if (letDists[c] > x)
            {
                // cout << "Reached minDist > x" << endl;
                // cout << "minDist = " << minDist << endl;
                ans += 1;
            }
        }
        else
        {
            if (letters.find(c) == letters.end())
            {
                cout << -1;
                return 0;
            }
        }
    }

    cout << ans;

    return 0;
}