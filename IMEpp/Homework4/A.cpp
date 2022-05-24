#include <bits/stdc++.h>

using namespace std;

int dpf(int h[],int k,int n){
    int dp[n+k+1]{};
    for(int i=0;k>i;i++) dp[0]+=h[i];

    int min = dp[0],pivot=0;

    for(int i=1; n-k>=i;i++){
        dp[i]=dp[i-1] + h[(i+k-1)] - h[i-1];
        if(min>dp[i]){
            min=dp[i];
            pivot=i;
        }
    }

    return pivot+1;
}


int main(){
    cin.tie(NULL);
	ios_base::sync_with_stdio(false);

    int n,k;
    cin >> n >> k;
    int h[n]{};
    for(int i=0;n>i;i++){
        cin>> h[i];
    }
    cout << dpf(h,k,n);
}