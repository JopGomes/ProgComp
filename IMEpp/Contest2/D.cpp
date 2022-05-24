#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int size = s.size();
    for (int i = 0; size > i; i++)
    {
        if (i % 2) //se for impar
        {
            if (s[i] <= 'z' && s[i] >= 'a')
            {
                cout << "No";
                return 0;
            }
        }
        else
        {
            if (s[i] <= 'Z' && s[i] >= 'A')
            {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
}