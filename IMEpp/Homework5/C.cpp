#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector<int> adj[N];
int vis[N];
int cat[N];

int countRestaurante = 0;

void dfs(int s, int gatos, int gatoMax)
{
    vis[s] = 1;

    int gatoAtual = cat[s-1] * (gatos + 1);
    if (gatoAtual > gatoMax)
        return;
    for (auto v : adj[s])
    {
        if (!vis[v])
        {
            dfs(v, gatoAtual, gatoMax);
        }
    }
    if (adj[s].size() == 1 && s != 1)
    {
        countRestaurante++;
        return;
    }
}

int main()
{
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; n > i; i++)
    {
        cin >> a;
        cat[i] = a;
    }
    for (int i = 0; n - 1 > i; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, 0, m);
    cout << countRestaurante << "\n";

}