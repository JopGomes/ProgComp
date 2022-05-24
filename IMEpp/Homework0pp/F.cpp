#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

int main(){
	int n, r;
	scanf("%d" , &n);
	scanf("%d", &r);
	float ang = 360.0/n;
	double raio = r*sin(ang*PI/180)/(2*sin((90-ang/2)*PI/180) - sin(ang*PI/180));
	printf("%.7f",raio);
}
