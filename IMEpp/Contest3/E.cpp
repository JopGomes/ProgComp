#include <bits/stdc++.h>

using namespace std;
void candie(long long n){
    if(n==1 || n==2){
        cout<<0<<"\n";return;
    }
    else{
        cout<< (n+1)/2 -1<<"\n";
    }
}

int main(){
    int t;
    long long int n;
    cin >>t;
    while(t--){
        cin >> n;
        candie(n);
    }
}