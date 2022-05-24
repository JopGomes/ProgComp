#include <bits/stdc++.h>
using namespace std;



vector<long long int> divisores(long long int n)
{
    vector<long long int> div;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if (n / i != i)
            {
                div.push_back(n / i);
            }

        }
    }
    return div;
}

bool menor (long long int i,long long int j) { return (i>j); }

int main()
{
    long long int t,n,k;
    cin >> t;
    for(long long int i = 0; t>i ; i++)
    {
        int count =0;
        cin >> n >> k;
        vector<long long int> div = divisores(n);
        sort (div.begin(), div.end(), menor);
        for(auto it = div.begin(); it != div.end(); ++it){
            if((*it) <= k ){
                long long int valor = *it;
                count++;
                cout << n/(*it)<< "\n";
                break;
            }
        }
        if(count==0){
            cout << n << "\n";
        }
        
    }
}