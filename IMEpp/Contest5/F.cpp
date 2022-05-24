#include <bits/stdc++.h>

using namespace std;

int N = 20;
vector<int> adj[N];
int vis[N][N];

void dfs(int s)
{
    vis[s] = 1;
    for (auto v : adj[s])
    {
        if (!vis[v])
        {
            vis[v];
            dfs(v);
        }
    }
}

int main()
{
    int n, m;
    char hor, ver;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> hor;
        if (hor - '<')
        {
            for(int j = 0; j < m ; j++){
                adj[i].push_back(j);
            }
        }
        else
        {
            for(int j = m;  0 < j ; j--){
                adj[i].push_back(j);
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> hor;
        if (hor - '<')
        {
            for(int j = 0; j < m ; j++){
                adj[i].push_back(<j,j+1>);
            }
        }
        else
        {
            for(int j = m;  0 < j ; j--){
                adj[i].push_back(<j,j-1>);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> m[i];
    }
}