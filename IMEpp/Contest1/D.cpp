#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,count=0;
    cin >> n;
    int gift[n];
    set<int> aux;
    for(int i=0; n>i;i++){
        cin >> gift[i];
        aux.insert(i);
    }
    for(int i =0 ; n>i;i++){
        aux.erase(gift[i]);
    }
    for(int i=0;n>i;i++){
        if(!gift[i]){
            auto it = aux.end();
            if((*it)== (i+1)) it--;
            gift[i]=(*it);
            aux.erase((*it));
        }
    }
    for(int i=0;n>i;i++){
        cout <<gift[i]<<" ";
    }
}