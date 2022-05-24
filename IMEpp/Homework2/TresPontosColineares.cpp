#include <bits/stdc++.h>
using namespace std;
// olhando todas as opçoes
int main()
{
    int n, j, count = 0;
    float a, b;
    int x1,x2,y1,y2;
    map<int, pair<int, int>> mapa;
    pair<int, int> ponto;
    cin >> n;
    for (int i = 0; n > i; i++)
    {
        cin >> ponto.first >> ponto.second;
        mapa.insert({i, ponto});
        if (i >= 2)
        {
            for (int j = 0; i > j; j++)
            {
                for (int k = 0; j > k; k++)
                {
                    x1 = mapa[j].first;
                    x2 = mapa[k].first;
                    y1 = mapa[j].second;
                    y2 = mapa[k].second;
                    a = (y2 - y1) / (x2 - x1);
                    b = (y1 * x2 - x1 * y2) / (x2 - x1);
                    if (mapa[i].second == a * mapa[i].first + b)
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout << count;
}