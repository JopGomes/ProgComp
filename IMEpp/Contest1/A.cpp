#include <bits/stdc++.h>
using namespace std;

int t, n, m, aux,b;

int main()
{
    set<int> p;
    vector<int> a;
    int count{};
    cin >> t;
    while (t--)
    {   
        a.clear();
        p.clear();
        count = 0;
        cin >> n >> m;
        for (int i = 0; n > i; i++)
        {
            cin >> b;
            a.push_back(b);
        }
        for (int i = 0; m > i; i++)
        {
            cin >> aux;
            p.insert(aux);
        }
        for (int i = 0; n > i; i++)
        {
            for (int j = 1; n  > j; j++)
            {
                if (a[j + 1] < a[j])
                {
                    if (p.count(j))
                    {
                        int temp = a[j+1];
                        a[j+1]=a[j];
                        a[j]=temp;
                    }
                }
            }
        }
        
        bool certo = true;
        for(int i = 1; i < n; i++) if(a[i] > a[i + 1]) certo = false;
        if(certo)cout << "YES\n";
        else cout << "NO\n";
    }
}