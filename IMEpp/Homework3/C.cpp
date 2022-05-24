#include <bits/stdc++.h>
using namespace std;

vector<long long int> factor(long long int n) {
    vector<long long int> fact;
    for(int i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            n /= i;
            fact.push_back(i);
        }
    }
    if(n != 1) {
        fact.push_back(n);
    }
    return fact;
}
long long int n,k,i,num=1;


int main()
{
    cin >> n >> k;
    vector<long long int> fatores = factor(n);
    if(k>fatores.size()){
        cout << "-1";
    }
    else{
        for(i =0; fatores.size()-k>=i;i++){
            num*=fatores[i];
        }
        cout << num << " ";
        for(i;fatores.size()>i;i++){
            cout << fatores[i] << " ";
        }
    }
    return 0;
}