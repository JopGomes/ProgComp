#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 5;
vector<int> ans[N], cent;
int vis[N], sz[N];

void dfs(int s, int count, int *max)
{
    bool ok = true;
    vis[s] = 1;
    if (count > *max)
    {
        *max = count;
    }
    for (auto v : ans[s])
    {
        if (!vis[v])
        {
            vis[v] = 1;
            dfs(v, count + 1, max);
        }
    }
}

int main()
{
    int n, m, min = -1, a, b;
    cin >> n;
    for (int i = 0; (n - 1) > i; i++)
    {
        cin >> a >> b;
        memset(vis, 0, sizeof(vis));
        ans[a].push_back(b);
        ans[b].push_back(a);
    }
    dfs(cent[0], 0, &min);

    cout << min;
}