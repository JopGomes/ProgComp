#include<bits/stdc++.h>
using namespace std;

const int N = 1001;
int ans[N][N];
int vis[N][N];
vector<pair<int, int>> mont;

int dx[] = {0, 0, 0, 1, -1};
int dy[] = {0, 1, -1, 0, 0};
int conta{};

void dfs(int x, int y, int direcao)
{
    if (x > 1001 || x < 0 || y > 1001 || y < 0)
        return;
    if (ans[x][y] == 1)
    {
        if (!(vis[x][y]))
        {
            vis[x][y] = 1;
            dfs(x + dx[1], y + dy[1], 1);
            dfs(x + dx[2], y + dy[2], 2);
            dfs(x + dx[3], y + dy[3], 3);
            dfs(x + dx[4], y + dy[4], 4);
        }
    }
    else
    {
        dfs(x + dx[direcao], y + dy[direcao], direcao);
    }
}
int main()
{
    int n, a, b;
    cin >> n;
    int c = n;
    while (n--)
    {
        cin >> a >> b;
        ans[a][b] = 1;
        mont.push_back({a, b});
    }
    for (int i = 0; mont.size()  > i; i++)
    {
        if (!vis[mont[i].first][mont[i].second])
        {
            conta++;
            dfs(mont[i].first, mont[i].second, 0);
        }
    }
    cout << conta-1;
}