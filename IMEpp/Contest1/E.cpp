#include <bits/stdc++.h>
using namespace std;

int cont=0;
long long int n,q,a,dia,v;
int main(){
    cin >> n;
    vector<long long int> vetor;
    for(long long int i=0;n>i;i++){
        cin >> v;
        vetor.insert(v);
    }
    cin >> q;
    for(int )
    for(long long int i=0; q>i;i++){
        cin >> dia;
        cont=0;
        vector<long long int>::iterator it = vetor.upper_bound(dia);
        long int c= it-vector.begin();
        cout << c<< "\n";
    }
}