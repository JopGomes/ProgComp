#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> vetor;
    long long int n,k;
    scanf("%lld",&n);
    for(int i=0; n>i;i++)
    {
        scanf("%lld",&k);
        if(vetor.count(k) != 0){
        }
        else{
            vetor.insert(k);
        }
    }
    printf("%d oi",vetor.size());
}