#include <stdio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#define INT_MAX 2147483647


int main()
{
    int N,K;
    cin >> N;
    cin >> K;
    int preco[N],sum=0,pivot=0;
    for(int i=0;N>i;i++){
        cin >> preco[i];
    }
    for(int i=0; K>i;i++){
        int min = INT_MAX;
        for(int j=0; N>j ; j++){
            if(min>preco[j] && preco[j]>=0){
                min = preco[j];
                pivot = j;
            }
        }
        preco[pivot]= -10; 
        sum+=min;
    }
    cout << sum;
}