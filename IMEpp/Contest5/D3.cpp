#include <bits/stdc++.h>
using namespace std;

const int N = 2e3 + 5;

vector<int> adj[N];
vector<int> fam(N);

int vis[N];
int contador = 1;

void dfs(int s)
{
    vis[s] = 1;
    for (auto v : adj[s])
    {
        if (!vis[v])
        {
            vis[v] = 1;
            contador++;
            dfs(v);
        }
    }
}
int main()
{
    int n, a, max = 1;
    cin >> n;
    for (int i = 0; n > i; i++)
    {
        cin >> a;
        if (a == -1)
            fam.push_back(-1);
        else
        {
            fam.push_back(i + 1);
            adj[i + 1].push_back(a);
        }
    }
    for (int i = 0; n >= i; i++)
    {
        dfs(i);
        if (contador > max)
        {
            max = contador;
        }
        contador = 1;
        memset(vis,0,sizeof(vis));
    }
    cout << max;
}