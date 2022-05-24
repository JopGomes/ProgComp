#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, ant, valor;
    char ope[2];
    set<long int> conj;
    map<long int, char[2]> tipo;
    map<long int, char[2]> map;
    char add[2] = "+";
    char next[2] = "?";
    strcpy(tipo[1], add);
    strcpy(tipo[2], next);
    cin >> n;
    for (int i = 0; n > i; i++)
    {
        cin >> ope >> valor;
        strcpy(map[i], ope);
        if (i == 0 && !strcmp(map[i], tipo[1]))
            conj.insert(valor);
        if (i != 0 && !strcmp(map[i], tipo[1])  && !strcmp(map[i - 1], tipo[1]) )
        {
            conj.insert(valor);
        }
        if (!strcmp(map[i], tipo[2]) )
        {
            set<long int>::iterator it = conj.lower_bound(valor);
            set<long int>::iterator end = conj.end();
            if (it == end)
            {
                cout << -1 << "\n";
                ant = -1;
            }
            else
            {
                cout << *it << "\n";
                ant = *it;
            }
        }
        if (i != 0 && !strcmp(map[i-1], tipo[2])  && !strcmp(map[i], tipo[1]) )
        {
            conj.insert((valor + ant) % 1000000000);
        }
    }
}