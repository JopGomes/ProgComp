#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int vis[N];

bool dfs(int s)
{
   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, a, b;
    cin >> n >> m;
    if (n - 1 != m)
        cout << "NO\n";
    else
    {
        for (int i = 1; m >= i; i++)
        {
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        if ()
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}
