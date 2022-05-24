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
        rest.push_back(aux % need);
    }
    vector<int> aux = numOfCookie;
    sort(aux.begin(), aux.end());
    auto min = numOfCookie.find(aux[0]);
    for (k; k > 0;)
    {
        aux = numOfCookie;
        sort(aux.begin(), aux.end());
        auto min = numOfCookie.find(aux[0]);
        while ((*it) == aux[0]{})
    }
}