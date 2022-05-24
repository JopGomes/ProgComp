#include <bits/stdc++.h>
using namespace std;

int permuta(long long x, long long y, long long z, long long k)
{
    switch (k % 6)
    {
        case 0:
            if(x) cout << 0;
            else if(y) cout << 1;
            else if(z) cout << 2;
            break;
        case 1:
            if(x) cout << 1;
            else if(y) cout <<0;
            else if(z) cout << 2;
            break;
        case 2:
            if(x) cout << 1;
            else if(y) cout << 2;
            else if(z) cout << 0;
            break;
        case 3:
            if(x) cout << 2;
            else if(y) cout << 1;
            else if(z) cout << 0;
            break;
        case 4:
            if(x) cout << 2;
            else if(y) cout << 0;
            else if(z) cout << 1;
            break;
        case 5:
            if(x) cout << 0;
            else if(y) cout << 2;
            else if(z) cout << 1;
            break;
            
    }
    return 0;
}
int main()
{
    long int n;
    int x, temp = 0;
    map<int, int> ostra;
    ostra[0] = 0;
    ostra[1] = 0;
    ostra[2] = 0;
    cin >> n >> x;
    ostra[x] = 1;
    permuta(ostra[0], ostra[1], ostra[2], n);
}