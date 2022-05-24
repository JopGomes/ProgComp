#include <bits/stdc++.h>

using namespace std;

const int N = 3e4 + 5;

vector<int> adj[N];
int vis[N];

int dfs(int s, int target)
{
    vis[s] = 1;
    if(s==target) return s;
    for (auto v : adj[s])
    {
        if (!vis[v])
        {
            vis[v] = 1;
            if (s == target)
                return target;
            else
            {
                int temp = dfs(v, target);
                if(temp){
                    return temp;
                }
            }
        }
    }
    return 0;
}

int main()
{
    int n, m, a;
    cin >> n >> m;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        adj[i].push_back(a + i);
    }
    int count = dfs(1, m);
    if (count == m)
        cout << "YES";
    else
        cout << "NO";
}