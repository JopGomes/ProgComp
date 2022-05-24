#include <bits/stdc++.h>
using namespace std;

int k=-1;
long long int n,x,a;
int main(){
    int count=0;
    cin >>  n >> x;
    map<long long int, pair<long long int,long long int>> mapa;
    for(long long int i=0; n>i;i++){
        cin>> a;
        pair<long long int,long long int> p;
        p.first=a;
        p.second=i;
        if(mapa.count(x-a)!=1){
            mapa.insert({x-a,p});
        }
        else if(mapa[a].first *2 ==x){
            cout<< mapa[a].second+1<< " " << i+1;
            count++;
            break;
        }
        if(mapa.count(a) && mapa[a].second!= mapa[x-a].second){
            cout<< mapa[a].second+1<< " " << mapa[x-a].second+1;
            count++;
            break;
        }
    }
    if(count==0){
        cout<<-1;
    }  
}