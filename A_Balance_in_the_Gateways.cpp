#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int,int>>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        char c;
        cin >> u >> v >> c;
        int w = (c == 'R' ? 1 : -1);
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    int off = m;
    const int INF = 1e9;

    vector<vector<int>> dist(n + 1, vector<int>(2 * m + 1, INF));
    queue<pair<int,int>> q;

    dist[1][off] = 0;
    q.push({1, off});

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();

        int u = cur.first;
        int bal = cur.second;

        for (auto e : adj[u])
        {
            int v = e.first;
            int nb = bal + e.second;

            if (nb < 0 || nb > 2 * m) continue;

            if (dist[v][nb] > dist[u][bal] + 1)
            {
                dist[v][nb] = dist[u][bal] + 1;
                q.push({v, nb});
            }
        }
    }

    if (dist[n][off] == INF) cout << -1 << endl;
    else cout << dist[n][off] << endl;

    return 0;
}
