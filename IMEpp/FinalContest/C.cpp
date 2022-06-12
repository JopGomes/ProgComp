#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> palavras;
    string s;
    int i=0,count=0,tam;
    cin >> tam;
    for(int i=0; tam>i;i++){
        cin >> s;
        palavras.push_back(s);
    }    
    for(int i=0;tam>i;i++){
        if(palavras[0][i]==palavras[i][0]){
            count++;
        }
        else {cout<<"No"; return 0;}
    }
    if(count == palavras[0].size()){cout<<"Yes";}
    else cout<<"No";
}