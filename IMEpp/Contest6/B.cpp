#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, sum{}, max = LLONG_MIN;
    cin >> n;
    long long arr[n], dp[n];
    for (int i = 0; n > i; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
        if (sum > max)
        {
            max = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
        
    }
    cout << max;
}