#include <bits/stdc++.h>
using namespace std;

vector<long long int> factor(long long int n)
{
    vector<long long int> fact;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            fact.push_back(i);
        }
    }
    if (n != 1)
    {
        fact.push_back(n);
    }
    return fact;
}

int main()
{
    long long int n, i = 0;
    cin >> n;
    vector<long long int> factorM;
    vector<long long int> factorm;
    if (n % 2)
    {
         factorM = factor((n-1) / 2);
         factorm = factor((n+1) / 2);
    }
    else
    {
         factorM = factor((n) / 2);
         factorm = factor((n) / 2);
    }
    while (factorM.size() < 2 || factorm.size() < 2)
    {
        i++;
        if (n % 2 == 0)
        {
            factorM = factor(n / 2 + i);
            factorm = factor(n / 2 - i);
        }
        else
        {
            factorM = factor((n - 1) / 2 + i);
            factorm = factor((n + 1) / 2 - i);
        }
    }
    if (n % 2)
        cout << (n - 1) / 2 + i << " " << (n + 1) / 2 - i;
    else
        cout << n / 2 + i << " " << n / 2 - i;
    return 0;
}