#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<int, set<int>> graph;
    while (m--)
    {
        int a, b;
        cin >> a >> b;

        set<int> s;
        if (graph.find(a) == graph.end())
            graph[a] = s;
        if (graph.find(b) == graph.end())
            graph[b] = s;
        graph[a].insert(b);
        graph[b].insert(a);
    }

    int ans = 0;

    while(true)
    {
        vector<int> waste;
        for (auto const& [key, val] : graph)
        {
            if (val.size() == 1)
                waste.push_back(key);
        }
        for (int w : waste)
        {
            set<int>::iterator first = graph[w].begin();
            graph[*first].erase(w);
            graph.erase(w);
        }
        if (waste.size())
            ans++;
        else
            break;
    }

    cout << ans;

    return 0;
}