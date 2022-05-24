#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int N = 1, max = -1, count = 0;
    while (true)
    {
        cin >> N;
        if (N == 0)
            break;
        max = -1;
        count = 0;
        int bet[N]{};
        for (int i = 0; N > i; i++)
        {
            cin >> bet[i];
            if (i > 0 && bet[i - 1] >= 0)
                bet[i] += bet[i - 1];
            count = bet[i];
            if (count >= max)
            {
                max = count;
            }
        }
        if (max <= 0)
            cout << "Losing streak."
                 << "\n";
        else
        {
            cout << "The maximum winning streak is " << max << ".\n";
        }
    }
}