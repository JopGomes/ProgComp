#include <stdio.h>

int main(){
	int vetor[2];
	int i=0,j=0,k=0;
	for(k;2>k;k++){
		scanf("%d",&vetor[k]);
	}
	for(i;vetor[1]>=2*i;i++){
		for(j=0;vetor[1]>=2*i+4*j;j++){
			if(vetor[0]==i+j && vetor[1]==2*i+4*j){
				printf("Yes");
				return 0;
			}
		}
	}
	printf("No");
	return 0;
}
