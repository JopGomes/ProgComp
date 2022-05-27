#include <bits/stdc++.h>
using namespace std;

const int N = 2e3 + 10;
vector<int> adj[N];
int vis[N];
bool bugs[N];
int contador = 0;

void dfs(int s, bool tipo)
{
    vis[s] = 1;
    int i=0;
    for (auto v : adj[s])
    { 
        if (!vis[v])
        {
            vis[v] = 1;
            bugs[v]=!tipo;
            dfs(v,!tipo );
        }
        else
        {
            if(tipo == bugs[v] ){
                contador++;
                break;
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
            if(!vis[bugA])bugs[bugA]=1;
            if(!vis[bugA])bugs[bugA]=0;
            adj[bugA].push_back(bugB);
            adj[bugB].push_back(bugA);
            dfs(bugA, 0);
        }
        cout << "Scenario" << " #" << i << ":"<< (contador?"\nNo s":"\nS") << "uspicious bugs found!";
    }
}