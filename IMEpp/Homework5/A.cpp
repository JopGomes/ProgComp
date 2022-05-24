#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 5;
vector<int> ans[N];
int vis[N];

void dfs(int s, int count, int *min, int target)
{
    if (count > *min)
        return;
    vis[s] = count;
    if (target == s)
    {
        if (*min > count)
        {
            *min = count;
        }
        return;
    }
    else if (s > 1e4)
        return;
    else if (1 > s)
        return;

    else
    {

        if ((!vis[s - 1] && 0 < s - 1) || (0<s-1 && count<vis[s-1] ))
        {
            dfs(s-1, count + 1, min, target);
        }
        if (2 * s < 1e4+1)
        {
            if (!vis[2 * s] || count<vis[2*s])
            {
                dfs(2*s, count + 1, min, target);
            }
        }
    }
}

int main()
{
    int n, m, min = 2147483647;
    cin >> n >> m;
    dfs(n, 0, &min, m);
    cout << min;
}