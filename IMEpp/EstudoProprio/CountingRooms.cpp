//https://cses.fi/problemset/task/1192

#include <bits\stdc++.h>
using namespace std;


const int N= 1e3;
int vis[N][N];
char grid[N][N];
queue<int> q;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int n,m;

void bfs(int i,int j){
    queue<pair<int,int>> q;
    vis[i][j]=true;
    q.push({i,j});
    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();
        for(int l=0; l<4 ; l++){
            int x = p.first + dx[l];
            int y = p.second + dy[l];
            if(x>=1 and x <= n and y>=1 and y<=m){
                if(grid[x][y] =='.' and  !vis[x][y]){
                    vis[x][y]=true;
                    q.push({x,y});
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=m;j++){
            cin >> grid[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<=n; i++){
        for(int j=1;j<=m;j++){
            if(grid[i][j]=='.' and !vis[i][j]){
                bfs(i,j);
                ans++;
            }
        }
    }
    cout <<ans;
}