#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int i=0,n;
	cin >> n;
	int vet[n];
	for(i;n>i;i++){
		scanf("%d",&vet[i]);
	}
	for(n;n>0;n--){
		printf("%d ",vet[n-1]);
	}
}
