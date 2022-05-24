#include <bits/stdc++.h>
using namespace std;

bool comparador(pair<long long, long long> p1, pair<long long, long long> p2)
{
    if (p1.first >= p2.first)
    {
        if (p1.first == p2.first)
        {
            if (p1.second < p2.second)
            {
                return false;
            }
            else
                return true;
        }
        else
            return false;
    }
    else
        return true;
}

int main()
{
    long long int x, y, n;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        vector<pair<long long, long long> > pontos;
        scanf("%lld", &n);
        for (int i = 0; n > i; i++)
        {
            scanf("%lld %lld", &x, &y);
            pair<long long, long long> p;
            p.first = x;
            p.second = y;
            pontos.push_back(p);
        }
        sort(pontos.begin(), pontos.end(), comparador);
        for (int i = 0; n > i; i++)
        {
            printf("%d %d\n", pontos[i].first, pontos[i].second);
        }
    }
}