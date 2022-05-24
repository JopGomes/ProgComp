#include <bits/stdc++.h>
using namespace std;

bool isTriangle(int a,int b,int c){
    if(a<b+c && b<c+a && c<a+b){
        return true;
    }
    else return false;
}

int main()
{
    int n, Li = 0, count = 0;
    cin >> n;
    vector<int> stick(n);
    for (int i = 0; n > i; i++){cin >> stick[i];}
    sort(stick.begin(), stick.end());
    for(int i=0;n>i;i++){
        for(int j=i;n>j;j++){
            auto dif = upper_bound (stick.begin(), stick.end(), abs(stick[i]-stick[j]));
            auto sum = lower_bound (stick.begin(), stick.end(), abs(stick[i]+stick[j]));
            if(dif!=stick.end() && sum != stick.end()){
                count += (dif-stick.begin()) + ((sum-stick.begin()));
            }
        }
    }
    cout << count;
}
