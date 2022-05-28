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
        memset(adj,0,sizeof(adj));
        contador = 0;
        cin >> b >> it;
        for (int j = 0; it > j; j++)
        {
            cin >> bugA >> bugB;
            if(!vis[bugA])bugs[bugA]=true;
            adj[bugA].push_back(bugB);
            adj[bugB].push_back(bugA);
        }
        for(int j = 1; j <= n; j++)
			// not yet visited
			if(vis[j] == 0)
				dfs(j, true);
        cout << "Scenario" << " #" << i << ":"<< (contador?"\nS":"\nNo s") << "uspicious bugs found!"<<endl;
    }
}