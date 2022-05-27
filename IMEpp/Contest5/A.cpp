#include <bits/stdc++.h>
using namespace std;



long double binaryExp(double x, long int y){
    if(y==0)return 1;
    else if(y%2==0){
        return binaryExp(x,y/2)*binaryExp(x,y/2);
    }
    else{
        return x*binaryExp(x,y/2)*binaryExp(x,y/2);
    }
}

int main(){
    int n;
    long int t;
    cin >> n >> t;
    cout << fixed;
    cout<< setprecision(8);
    cout << n * binaryExp(1.000000011,t);
}