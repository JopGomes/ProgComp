#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, a, b, count2 = 0;
    cin >> x >> y >> a >> b;
    map<int, pair<int, int>> jogo;
    pair<int, int> p;
    while (x >= a)
    {
        int count = b;
        while (a > count && y>=count)
        {
            p.first = a;
            p.second = count;
            jogo.insert({count2, p});
            count++;
            count2++;
        }
        a++;
    }
    cout << count2 <<"\n";
    for( int i =0 ; count2>i;i++)
    {
        cout << jogo[i].first <<" "<< jogo[i].second << "\n";
    }
}