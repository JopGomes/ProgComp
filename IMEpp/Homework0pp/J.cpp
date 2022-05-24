#include <stdio.h>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int n, pivot;
    cin >> n;
    int sum{0};
    int vetor[n], max = 0;
    for (int i = 0; n > i; i++)
    {
        cin >> vetor[i];
    }
    for (int i = 0; n > i; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            sum = 0;
            for (int l = 0; i > l; l++)
            {
                sum += vetor[l];
            }
            for (int k = j; k >= i; k--)
            {
                sum += 1 - vetor[k];
            }
            for( int p = j+1; n>p; p++){
                sum+= vetor[p];
            }
            if (sum > max)
            {
                max = sum;
            }
        }
    }
    cout << max;
}