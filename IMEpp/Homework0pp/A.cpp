#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	long long int vetor[4];
	int i = 0;
	for (i; 4 > i; i++)
	{
		cin >> vetor[i];
	}
	// a<b<0 e c<d<0
	if (vetor[1] <= 0 && vetor[3] <= 0)
	{
		cout << vetor[0] * vetor[2];
		return 0;
	}
	// a<0<b e c<d<0
	if (vetor[1] >= 0 && vetor[0] <= 0 && vetor[3] <= 0)
	{
		cout << vetor[0] * vetor[2];
		return 0;
	}
	// 0<a<b e c<d<0
	if (vetor[0] >= 0 && vetor[3] <= 0)
	{
		cout << vetor[0] * vetor[3];
		return 0;
	}
	//a<b<0 e c<0<d
	if( vetor[1]<=0 && vetor[2]<=0 && vetor[3]>=0){
		cout << vetor[0] * vetor[2];
		return 0;
	}

	// a<b<0 e 0<c<d
	if (vetor[1] <= 0 && vetor[2] >= 0)
	{
		cout << vetor[1] * vetor[2];
		return 0;
	}

	// a<0<b e c<0<d
	if (vetor[1] >= 0 && vetor[0] <= 0 && vetor[3] >= 0 && vetor[2] <= 0)
	{
		if (vetor[1] * vetor[3] > vetor[2] * vetor[0])
		{
			cout << vetor[1] * vetor[3];
		}
		else
		{
			cout << vetor[0] * vetor[2];
		}
		return 0;
	}
	// 0<a<b e c<0<d
	if(vetor[0]>=0 && vetor[3]>=0 && vetor[2]<=0){
		cout << vetor[3]*vetor[1];
		return 0;
	}

	// b>a>0 e d>c>0
	if (vetor[0] >= 0 && vetor[2] >= 0)
	{
		cout << vetor[1] * vetor[3];
		return 0;
	}
		//  a<0<b e 0<c<d
	if (vetor[0] <= 0 && vetor[1] >= 0 && vetor[2] >= 0)
	{
		cout << vetor[1] * vetor[3];
		return 0;
	}
}
