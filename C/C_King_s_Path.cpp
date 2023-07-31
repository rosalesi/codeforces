#include <bits/stdc++.h>
using namespace std;

int main() {
    int x0, y0, x1, y1, n; cin >> x0 >> y0 >> x1 >> y1 >> n;
    set<pair<int, int>> safe;
    while (n--) {
        int r, a, b; cin >> r >> a >> b;
        for (int i = a; i <= b; i++)
            safe.insert(make_pair(r, i));
    }

    int ans = -1;

    queue<pair<int, int>> q;
    set<pair<int, int>> visited;
    map<pair<int, int>, int> len;

    pair<int, int> target = make_pair(x1, y1);
    len[{ x0, y0 }] = 0;
    q.push(make_pair(x0, y0));

    while (!q.empty()) {
        pair<int, int> coord = q.front(); q.pop();

        if (coord == target) {
            ans = len[coord];
            break;
        }

        int dx[8] = {1, 0, -1, -1, -1, 0, 1, 1};
        int dy[8] = {-1, -1, -1, 0, 1, 1, 1, 0};

        for (int i = 0; i < 8; i++) {
            int xx = coord.first + dx[i];
            int yy = coord.second + dy[i];
            pair<int, int> cell = make_pair(xx, yy);

            if (safe.find(cell) != safe.end()
                && visited.find(cell) == visited.end()) {
                len[cell] = len[coord] + 1;
                visited.insert(cell);
                q.push(cell);
            }
        }
    }

    cout << ans;

    return 0;
}