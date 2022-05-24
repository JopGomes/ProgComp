#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, p;
    vector<int> permuta{};
    cin >> n >> k;
    for (int i = 0; n > i; i++)
    {
        permuta.push_back(n - i);
    }
    sort(permuta.begin(),permuta.end());
    // BubbleSort(permuta, k);
    for ( int i=n;  i>(n-k); i--)
    {
        cout << *lower_bound(permuta.begin(),permuta.end(),i)<< " ";
    }
    for (int j = 0; (n-k)>j ; j++)
    {
        cout << *upper_bound(permuta.begin(),permuta.end(),j)<< " ";
    }
}