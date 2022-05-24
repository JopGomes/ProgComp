#include <bits/stdc++.h>
using namespace std;

const int N=2e3+5;
vector<int> adj[N];
vector<int> fam(N);
int vis[N];
int contador =0;
void dfs(int x)
{
    vis[s] = 1;
    for (auto v : adj[s])
    {
        if (!vis[v])
        {
            vis[v]=1;
            contador++;
            dfs(v);
        }
    }
}
int main()
{
    int n,a,max=1;
    cin >> n;
    for (int i = 1; n > i; i++)
    {
        cin >> a;
        if( a == -1) continue;
        else{
            fam[i]=a;

            
            adj[i].push_back(a);
        }
    }
    for(int i=1; i<=fam.size();i++){
        dfs(fam[i]);
        if(contador>max){
            max=contador;
        }
        contador=0;
    }
    cout << max;
}