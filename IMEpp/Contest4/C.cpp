#include <bits/stdc++.h>
using namespace std;

const int N=1e5+2;
long long money[N];
long long int dp[N];

int main(){
    int n,maxi=0,count=0;
    cin >> n;
    for(int i=0; n>i;i++){
        cin >> money[i];
        if(money[i]<money[i-1]){
            count=0;
        }
        count++;
        maxi=max(maxi,count);
    }
    cout << maxi;
}