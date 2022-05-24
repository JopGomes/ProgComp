#include <stdio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	long int max = 0;
	long int i = 0, j = 0, p = 0;
	long int k;
	cin >> k;
	long int vetor[k];
	for (p; k > p; p++)
	{
		cin >> vetor[p];
	}
	for (i; k > i; i++)
	{
		if (vetor[i] >= max)
		{
			max = vetor[i];
		}
		if (i == k)
		{
			if (max >= vetor[i])
			{
				j += max - vetor[i];
				vetor[i] = max;
				cout << j;
				return 0;
			}
		}
		else
		{
			if (max >= vetor[i + 1] && k > i + 1)
			{
				j += max - vetor[i + 1];
				vetor[i + 1] = max;
			}
		}
	}
	cout << j;
	return 0;
}
