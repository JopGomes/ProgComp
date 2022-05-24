#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int i=0,n=5;
	int vet[n];
	for(i;5>i;i++){
		scanf("%d",&vet[i]);	
	}
	for(n;n>0;n--){
		if(vet[n-1]==0){
			printf("%d",n);
		}
	}
}
