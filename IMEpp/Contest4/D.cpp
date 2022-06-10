#include <bits/stdc++.h>
using namespace std;


double distance(int x , int y){
    return (x*x+y*y);
}

double distancePoint(int x,int y,int x2,int y2){
    return distance(x-x2,y-y2);
}

int main(){
    int andar[]={1,-1,-2};
    int andarT[]={2,1,-1};
    vector<pair<int,int> > pontos;
    vector<int> distances;
    int count =0;
    for(int i=0;3>i;i++){
        pair<int,int> p;
        cin >> p.first >> p.second;
        pontos.push_back(p);
    }
    double d;
    for(int i=0;3>i;i++){
        if(
            distancePoint(pontos[i].first,pontos[i].second,pontos[i+andar[i]].first,pontos[i+andar[i]].second)==distancePoint(pontos[i+andar[i]].first,pontos[i+andar[i]].second,pontos[i+andarT[i]].first,pontos[i+andarT[i]].second)+distancePoint(pontos[i+andarT[i]].first,pontos[i+andarT[i]].second,pontos[i].first,pontos[i].second)
            ){cout<<"RIGHT";return 0;}
    }    
}