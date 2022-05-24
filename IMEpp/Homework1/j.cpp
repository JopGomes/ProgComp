#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> piramide(long long resto, long int count)
{
    pair<long long, long long> p;
    if (resto ==2)
    {
        p.first = 1;
        p.second = count + 1;
        return p;
    }
    else if (resto < 2)
    {
        p.first = 0;
        p.second = count;
        return p;
    }
    else
    {
        long long i = 0;
        long long valor = 0;
        while (resto>=valor)
        {
            i++;
            valor += 2 * i+ (i-1);
        }
        return piramide(resto-valor+2*(i) +(i-1),count+1);
    }
}

int main()
{
    int n;
    long int k;
    cin >> n;
    while (n--)
    {
        cin >> k;
        cout << piramide(k, 0).second << " \n";
    }
    return 0;
}