#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, aux, min, pivot;
    cin >> n >> k;
    vector<int> need;
    vector<int> numOfCookie;
    vector<int> rest;
    map<int, int> cnt;
    for (int i = 0; n > i; i++)
    {
        cin >> aux;
        need.push_back(aux);
    }
    for (int i = 0; n > i; i++)
    {
        cin >> aux;
        numOfCookie.push_back(aux / need[i]);
        rest.push_back(aux % need[i]);
    }
    vector<int> aux2 = numOfCookie;
    sort(aux2.begin(), aux2.end());
    auto mini = find(numOfCookie.begin(),numOfCookie.end(),aux2[0]);
    for (k; k > 0;)
    {
        aux2 = numOfCookie;
        sort(aux2.begin(), aux2.end());
        mini = find(numOfCookie.begin(),numOfCookie.end(),aux2[0]);
        while ((*mini) == aux2[0]){mini++;}
    }
}