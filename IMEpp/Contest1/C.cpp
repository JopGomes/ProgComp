#include <bits/stdc++.h>
using namespace std;

long long int n,x,a;
long long int vetor[105],resposta[105];
int main(){
    cin >>  n ;
    for(int i=0;n>i;i++){
        cin >> vetor[i];
        resposta[vetor[i]-1]=i+1;
    }
    for(int i=0;n>i;i++){
        cout<< resposta[i] << " ";
    }

}