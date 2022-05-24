#include <bits/stdc++.h>
using namespace std;

int exp(int x,unsigned int y, int mod){

    int result{1};

    while(y){
        if(y%2){
            result *= x;
            result %= mod;
            y--;
        }
        else {
            x*=x;
            x %= mod;
            y /=2; 
        }
    }
    return result;
}

int main(){
    int n,x,mod,result;
    unsigned int y;
    cin >> n;
    while(n--){
        cin >> x >> y >> mod;
        result=exp(x,y,mod);
        cout << result << '\n';
    }
}