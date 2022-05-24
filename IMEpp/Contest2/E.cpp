#include <bits/stdc++.h>
using namespace std;

long int t;
long long n;

int NumTring(long long n)
{
    long long a = 1, b, c,count=0;
    for (a = 1; n >= a && n>=(a*a+1)/2  ; a++)
    {
       b= (a*a-1)/2;
       c=b+1;
       if( b>c || a>b){
           continue;
       }
       if(c*c==b*b+a*a && n>= c && c>= b && n>= b && b>= a){
           count++;
       }
    }
    return count;
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << NumTring(n) << "\n";
    }
}