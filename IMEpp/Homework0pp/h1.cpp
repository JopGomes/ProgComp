#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>

using namespace std;

int main(){

	string n;
	
	int i=0,sum=0;
	int num;
	cin >> n;
	for(i=0; n.size() > i; i++){
		char c = n[i];
		num  = c - '0';
		sum += num;
	}
	if(sum % 9==0){
		printf("Yes");
	}
	else{
		printf("No");
	}

	return 0;
}
