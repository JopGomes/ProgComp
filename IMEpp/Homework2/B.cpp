#include <bits/stdc++.h>
using namespace std;
int main()
// forcando todas as possibilidades
{
    long int i, j, a, b, c, n, k, ans, rem;
    cin >> n >> a >> b >> c;
    ans = 0;
    for (i = 0; n >= i * a; ++i)
    {
        for (j = 0; n >= i * a + j * b; ++j)
        {
            rem = n - i * a - j * b;
            if (rem % c == 0)
            {
                k = rem / c;
                ans = max(ans, i + j + k);
            }
        }
    }
    cout << ans;
}