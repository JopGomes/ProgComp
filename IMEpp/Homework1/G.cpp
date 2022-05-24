#include <bits/stdc++.h>
using namespace std;
long long int n, q, targ, l, r, a;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> n >> q;
    int vetor[n];
    int resposta[q];
    for (int i = 0; n > i; i++)
    {
        cin >> a;
        vetor[i] = a;
    }
    for (int i = 0; q > i; i++)
    {
        cin >> targ;
        l = 0;
        r = n-1;
        int mid = (l + r) / 2;
        while (l < r)
        {
            if (vetor[mid] < targ)
                l = mid + 1;
            else
                r = mid;
            mid = (l + r) / 2;
        }
        if (vetor[mid] == targ)
        {
            cout << mid << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    // for (int i = 0; q > i; i++)
    // {
    //     cout << resposta[i] << endl;
    // }
}