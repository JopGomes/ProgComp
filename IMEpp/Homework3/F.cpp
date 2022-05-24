#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll MOD = 1e9 + 7;

bool menor(int a, int b)
{
    if (a > b)
    {
        return true;
    }
    else
        return false;
}

ll fat(ll b, ll m = MOD)
{
    if (b == 1 || b == 0)
        return 1;
    else
    {
        return (b * fat(b - 1)) % m;
    }
}

int main()
{
    int t, n, k, p, ant, countIgual;
    long long int count, numb;
    vector<int> blog;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        blog.clear();
        numb = 0;
        count = 1;
        ant = -1, countIgual = 0;
        for (int i = 0; n > i; i++)
        {
            cin >> p;
            blog.push_back(p);
        }
        sort(blog.begin(), blog.end(), menor);
        for (auto it = blog.begin(); it != blog.end(); it++)
        {
            numb++;
            if (ant == *it && numb <= k)
            {
                countIgual++;
                if (numb == k)
                {
                    for (auto it2 = it; it2 != blog.end(); it2++)
                    {
                        if(ant=*it2){
                            countIgual++;
                        }
                        else break;
                    }
                }
                
            }
            if(numb==n) count = (count * fat(countIgual) / (fat(countIgual - k) * fat(k))) % MOD;
            ant = *it;
        }
        cout << count << "\n";
    }
}