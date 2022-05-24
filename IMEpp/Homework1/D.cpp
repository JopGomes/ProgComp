#include <bits/stdc++.h>
using namespace std;

using Pair = std::pair<int,int>;

int main()
{
    map<Pair, string> code;
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, t, teste;
    long int key;
    string nome;
    cin >> n;
    for (int i = 0; n > i; i++)
    {
        Pair pair;
        cin >> pair.first >> pair.second >>nome;
        code[pair] = nome;
    }
    cin >> t;
    for (int i = 0; t > i; i++)
    {
        Pair pair;
        cin >> pair.first >> pair.second;
        cout << code[pair] << "\n";
    }
    return 0;
}