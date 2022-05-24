#include <bits/stdc++.h>
#define pb push_back

using namespace std;

vector<int> adj[N];
int dist[N];

priority_queue<int> pq;

int main()
{
    cin >> n >> m >> q;
    for (int i = 0; i < m; i++)
    {
        scanf("%d%d%d", &a, &b, &w);
        adj[a].pb({b, w}); // Be careful!
        adj[b].pb({a, w}); // Be careful!
    }

    cl(dist, 63);
    dist[s] = 0;
    pq.push({0, s});

    while (!pq.empty())
    {
        int ud = -pq.top().st;
        int u = pq.top().nd;
        pq.pop();
        if (dist[u] < ud)
            continue;
        for (auto x : adj[u])
        {
            int v = x.st;
            int w = x.nd;
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({-dist[v], v});
            }
        }
    }
}