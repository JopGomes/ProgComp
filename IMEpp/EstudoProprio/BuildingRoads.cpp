// https://cses.fi/problemset/task/1666

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

bool vis[N];
vector<int> adj[N];

void dfs(int s)
{
    vis[s] = true;
    for (int v = 1; adj[s].size() > v; v++)
    {
        if (!vis[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    vector<pair<int, int>> ans{};
    for (int i = 2; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            ans.push_back({1, i});
        }
    }
    for (int i = 1; ans.size() > i; i++)
    {
        cout << "Oi\n";
        cout << ans[i].first << ' ' << ans[i].second << "\n";
    }
}