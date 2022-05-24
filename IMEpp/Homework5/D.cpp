#include <bits/stdc++.h>
using namespace std;

unsigned int min = -1;
int grid[8][8];
int vis[8][8];

queue<vector<int>> q;

int dx[] = {2, 2, 1, -1, -2, -2, -1, 1};
int dy[] = {-1, 1, 2, 2, 1, -1, -2, -2};

int _bfs(int x, int y, int obj_x, int obj_y)
{
    vis[x][y] = 1;
    q.push({x, y, 0});
    while (!q.empty())
    {
        auto tuple = q.front();
        q.pop();
        int newX = tuple[0];
        int newY = tuple[1];
        int size = tuple[2];
        if (obj_x == newX && obj_y == newY)
        {
            
            return size;
        }

        for (int i = 0; 8 > i; i++)
        {
            newX = tuple[0];
            newY = tuple[1];
            newX += dx[i];
            newY += dy[i];
            if (newX < 8 && newX >= 0 && newY < 8 && newY >= 0)
            {
                if (!vis[newX][newY])
                {
                    if (obj_x == newX && obj_y == newY)
                    {
                        return size + 1;
                    }
                    q.push({newX, newY, size + 1});
                    vis[newX][newY] = 1;
                }
            }
        }
    }
    return -1;
}

int bfs(int x, int y, int obj_x, int obj_y)
{
    memset(vis, 0, sizeof(vis));
    int val= _bfs(x, y, obj_x, obj_y);
    while (!q.empty())q.pop();
    return val;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a;
    string init, obj;
    cin >> a;
    while (a--)
    {
        cin >> init >> obj;
        cout << bfs(init[0] - 'a', init[1] - '1', obj[0] - 'a', obj[1] - '1') << "\n";
    }
}