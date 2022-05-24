#include <bits/stdc++.h>
using namespace std;

int main()
{
    int val{}, n, count{};
    cin >> n;
    vector<string> vetor(n);
    map<string,int> contador;
    for (int j = 0; n > j; j++)
    {
        cin >> vetor[j];
        contador[vetor[j]]++;
    }
    for(int j=0;n>j;j++){
        val=max(val,contador[vetor[j]]);
    }
    cout << val;
}