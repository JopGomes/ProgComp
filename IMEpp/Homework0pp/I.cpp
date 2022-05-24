#include <stdio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#define INT_MAX 2147483647

int main()
{
    long int n, m;
    cin >> n >> m;
    long int preco[m],comprado[n], pivot{0}, valor = INT_MAX;
    long int min2= INT_MAX,max= -1;
    for (long int i = 0; m > i; i++)
    {
        cin >> preco[i];
    }
    for(long int i=0; n>i;i++){
        long int min= INT_MAX;
        for(long int j=0; m>j; j++){
            if(preco[j]>=0 && min >= preco[j]){
                min = preco[j];
                pivot = j;
            }
        }
        preco[pivot] = -2;
        comprado[i]=min;
    }
    for(long int i =0 ; n>i; i++){
        if(min2>comprado[i]){
            min2 = comprado[i];
        }
        if(max < comprado[i]){
            max= comprado[i];
        }
    }
    cout << max- min2;
}