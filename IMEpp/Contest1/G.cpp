#include <bits/stdc++.h>
using namespace std;

long long int n, k,cont=0;
// long long int vetor[2*100000];
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> n;
    // set<long long int> vetor;
    map<long long int, long long int> m;
    for (long long int i = 0; n > i; i++)
    {
        cin >> k;
        if(m.count(k)>0){
            m[k]=1;
        }
        else{
            m.insert({k,0});
            cont++;
        }
    }
    // cout << vetor.size();
    cout << cont;
}