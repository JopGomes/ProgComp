#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;

ll fexp(ll b, ll e, ll m = MOD)
{
    ll ans = 1;
    while (e)
    {
        if (e & 1)
            ans = (ans * b) % m;
        b = (b * b) % m;
        e /= 2;
    }
    return ans;
}

ll mdc(ll a, ll b)
{
    return b ? mdc(b, a % b) : a % MOD;
}

int main()
{
    ll T, N, M, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> M >> N;
        ll exp= fexp(M,N);
        Y = (exp)%MOD;
        X = ((exp-1) * fexp(M-1,MOD-2))% MOD;
        cout << X <<" "<< Y << "\n";
    }
}