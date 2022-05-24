#include <bits/stdc++.h>
using namespace std;
// olhando todas as opçoes
int main()
{
    int n, j, count = 0;
    float a, b;
    int x1, x2, y1, y2;
    set<int> pontos;
    cin >> n;
    int ponto[n][2];
    for (int i = 0; n > i; i++)
    {
        cin >> ponto[i][0] >> ponto[i][1];
        int pontoI = ponto[i][0] * 2001 + ponto[i][1];
        pontos.insert(pontoI);
    }
    for (int j = 0; j < n; j++)
    {
        int pontoJ = ponto[j][0] * 2001 + ponto[j][1];
        for (int k = j + 1; k < n; k++)
        {
            int pontoK= ponto[k][0] * 2001 + ponto[k][1];
            if (!((ponto[k][0] ^ ponto[j][0])&1) && (!((ponto[k][1] ^ ponto[j][1])&1)))
            {
                if (!(pontos.find((pontoJ + pontoK) / 2 ) == pontos.end()))
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}