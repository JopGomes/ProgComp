#include <bits/stdc++.h>

using namespace std;

const int N=1e4+5;
vector<int> adj[N];

int par[N];

int find (int a) {
   return par[a];
}

void unite (int a, int b) {
   if ((a = find(a)) == (b = find(b))) return;
   for(int i = 1; i <= n; i++){
       if(par[i] == a) par[i] = b;
   }
}


int main(){
    set<int> par[i];
    cin >> n;
    for(int i=0;n>i;i++){
        cin >> a;
        par[i]=a;
    }
    for(int i=0;n>i;i++){
        cnt.insert(par[i]);
    }
}