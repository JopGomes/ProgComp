#include <stdio.h>
#include <string.h>

int main(){
	int n,AC=0,WA=0,TLE=0,RE=0,i=0;
	char str[10];
	scanf("%d",&n);
	for(i;n>i;i++){
		scanf("%s",str);
		if(!strcmp("AC",str)){
			AC++;
		}
		if(!strcmp("WA",str)){
			WA++;
		}
		if(!strcmp("TLE",str)){
			TLE++;
		}
		if(!strcmp("RE",str)){
			RE++;
		}
	}
	printf("AC x %d\n",AC);
	printf("WA x %d\n",WA);
	printf("TLE x %d\n",TLE);
	printf("RE x %d\n",RE);
	return 0;
}
