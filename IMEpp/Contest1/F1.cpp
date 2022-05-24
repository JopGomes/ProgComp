#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    int count=0;
    cin >> n;
    for (int i = 0; n.size() > i; i++)
    {
        if (n[i]-'0'==0 && count==0)
        {
            n.erase(n.begin()+i);
            count++;
        }
    }
    if(count==0) n.erase(n.begin());
    cout << n;
}