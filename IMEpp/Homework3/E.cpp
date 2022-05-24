#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    long long int N = 100003, min = 100009, ope, k;
    bool comp[N + 1]{};
    comp[1] = true;
    comp[0] = true;
    for (long long int i = 2; i <= N; i++)
    {
        if (comp[i])
        {
            continue;
        }
        for (long long j = i * i; j <= N; j += i)
        {
            comp[j] = true;
        }
    }

    cin >> n >> m;
    long int matriz[n][m];
    long long count[n][m];
    for (int i = 0; n > i; i++)
    {
        for (int j = 0; m > j; j++)
        {
            cin >> matriz[i][j];
            for (k = matriz[i][j]; comp[k]; k++)
            {
            }
            count[i][j] = (k)-matriz[i][j];
        }
    }
    for (int i = 0; n > i; i++)
    {
        ope = 0;
        for (int j = 0; m > j; j++)
        {
            ope += count[i][j];
        }
        if (min > ope)
            min = ope;
    }
    for (int i = 0; m > i; i++)
    {
        ope = 0;
        for (int j = 0; n > j; j++)
        {
            ope += count[j][i];
        }
        if (min > ope)
            min = ope;
    }
    cout << min;
}