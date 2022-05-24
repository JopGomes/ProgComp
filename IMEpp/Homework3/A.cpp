#include <bits/stdc++.h>
using namespace std;

long long int isDiv()
{
    long int n;
    long long int target{};
    set<long long> array;
    cin >> n;
    for (int i = 0; n > i; i++)
    {
        cin >> target;
        array.insert(target);
    }
    auto begin = array.begin();
    for(auto it= ++array.begin();it != array.end();it++){
        if((*it)%(*begin)){
            return -1;
        }
    }
    return *begin;
}

int main()
{
    cout << isDiv();
    return 0;
}