#include<bits/stdc++.h>
using namespace std;

const int N = 25;

int n, m, h, vis[N][N];
char horD[N], verD[N];

int dfs(int x, int y){
	if(x <= 0 || x > n || y <= 0 || y > m || vis[x][y] == h)
		return 0;
		
	int r = 1;
	vis[x][y] = h;
	
	if(horD[x] == '>')
		r += dfs(x, y + 1);
	else
		r += dfs(x, y - 1);
		
	if(verD[y] == '^')
		r += dfs(x - 1, y);//baixo
	else
		r += dfs(x + 1, y);//cima
		
	return r;
}

int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> horD[i];
	for(int i = 1; i <= m; i++)
        cin >> verD[i];
	
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++){
			h++;
			if(dfs(i, j) < n * m){
				printf("NO\n");
				return 0;
			}
		}
	printf("YES\n");
}