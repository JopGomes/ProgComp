#include <bits/stdc++.h>
using namespace std;

const int N = 2e3 + 10;
vector<pair<int, int>> adj[N];
int vis[N];
int contador = 0;

void dfs(int s, int tipo)
{
    vis[s] = 1;
    int i=0;
    for (auto v : adj[s])
    { 
        i++;
        if (!vis[v.second])
        {
            vis[v.second] = 1;
            v.first = (tipo + 1) % 2;
            dfs(v.second, v.first);
        }
        else
        {
            if(adj[v.second][i].first == v.first ){
                contador++;
            }
        }
    }
}

int main()
{
    int n, b, it, bugA, bugB;
    cin >> n;
    for (int i = 1; n >= i; i++)
    {
        memset(vis,0,sizeof(vis));
        contador = 0;
        cin >> b >> it;
        for (int j = 0; it > j; j++)
        {
            cin >> bugA >> bugB;
            adj[bugA].push_back({0, bugB});
            adj[bugB].push_back({1, bugA});
            dfs(bugA, 0);
        }
        cout << "Scenario" << " #" << i << ":"<< (contador?"\nNo s":"\nS") << "uspicious bugs found!";
    }
}