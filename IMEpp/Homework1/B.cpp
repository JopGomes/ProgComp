#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Número máximo coloque uma margem maior para não dar RTE (+5)
    // long long int N = 1000005;
    // long long int M = 1000005;
    // long long int ordv[N], cnt[M];
    // long long int n, k;
    // long int v[1005];

    long long int n, k;
    cin >> n;
    long long int v[n], ordv[n];
    long long int N = n, max = 0;

    for (long long int i = 0; n > i; i++)
    {
        cin >> v[i];
        ordv[i] = 0;
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    long long int M = max + 1;
    long long int cnt[M];
    for (long long int i = 0; M > i; i++)
    {
        cnt[i] = 0;
    }
    for (long long int i = 0; i < N; i++)
    {
        cnt[v[i]]++;
    }
    long long int cur = 0;
    for (long long int i = 0; i < M; i++)
    {
        while (cnt[i] != 0)
        {
            ordv[cur] = i;
            cur++;
            cnt[i]--;
        }
    }

    printf("%lld", ordv[(cur - 1) / 2]);
    return 0;
}