#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n, tipo, l, r, prec, testes;
    cin >> n;
    vector<ll> preco(n),dp(n),dpO(n);
    for (ll i = 0; n > i; i++)
    {
        cin >> prec;
        preco[i]=(prec);
    }
    vector<ll> precoO(n);
    precoO=preco;
    sort(precoO.begin(), precoO.end());
    cin >> testes;
    dp[0]=0;
    dpO[0]=0;
    for(ll i=0; n>i;i++){
        dp[i]= dp[i-1] + preco[i];
    }
    for(ll i=0; n>i;i++){
        dpO[i]= dpO[i-1] + precoO[i];
    }
    while (testes--)
    {
        cin >> tipo >> l >> r;
        if (tipo == 1)
        {
            cout << dp[r-1]-dp[l-2] <<"\n";
        }
        else
        {
            cout << dpO[r-1]-dpO[l-2] <<"\n";
        }
    }
    return 0;
}