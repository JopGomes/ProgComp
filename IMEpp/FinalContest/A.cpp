#include <bits/stdc++.h>
using namespace std;


const int N = 1e5 + 10;
vector<int> adj[N];
int vis[N];
int counte = 0;
int ans=0;

void dfs(int s)
{
    vis[s] = 1;
    int i=0;
    for (auto v : adj[s])
    { 
        if (!(vis[v]))
        {
            vis[v] = 1;
            dfs(v);
        }
        else{
            cout<<"No more comedians++";
            ans++;
        }
    }
}

int main(){
    int n;
    map<string,int> decod;
    string a,b;
    cin >> n;
    for(int i=0;n>i;i++){
        cin >> a >> b;
        if(!decod.count(a)){
            counte++;
            decod.insert({a,counte});
        }
        if(!decod.count(b)){
            counte++;
            decod.insert({b,counte});
        }
        adj[decod[a]].push_back(decod[b]);
        
    }
   for(int i=0;counte>i;i++){
       if(ans!=0){break;}
       if(!vis[i]){
           memset(vis,0,sizeof(vis));
           dfs(i);
       }
   }
    if(ans==0){
        cout<<"I disagree with the advisor";
    }
}