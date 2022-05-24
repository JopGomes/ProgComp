#include <bits/stdc++.h>

using namespace std;
long int cnt = 1;

void Numdivisores(long long int n)
{
    for (long long int i = 2; i * i <= n; i++)
    {
        int aux = 0;
        while (n % i == 0)
        {
            n /= i;
            aux++;
        }
        cnt *= (aux + 1);
    }
    if (n != 1)
    {
        cnt*=2;
    }
}

int main()
{
    cin.tie(NULL);
	ios_base::sync_with_stdio(false);
    long long int b;
    cin >> b;
    Numdivisores(b);
    cout << cnt;
}