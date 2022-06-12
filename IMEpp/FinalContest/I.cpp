#include <bits/stdc++.h>
using namespace std;

const int N=1e6+2;
int dp[N];

int main(){
    int total=100,max=0,counte=0,totalF=0,i;
    string s;
    cin >> s;
    if(s[0]=='E'){cout<<"I cry";return 0;}
    dp[0]=1;
    for(i=1;s.size()>i;i++){
        if(s[i]=='F'){
            dp[i]=dp[i-1]+1;
        }
        else{
            while(s[i]=='E'){
                if(s.size()==i){break;}
                dp[i]=dp[i-1]-1;
                if(dp[i]<0){cout<<"I cry";return 0;}
                i++;
            }
            i--;
            if(dp[i]>max && counte==0){max=dp[i];}
            counte++;
        }
    }
    if(dp[i]>max && counte==0){max=dp[i];}
    cout<< max;
}