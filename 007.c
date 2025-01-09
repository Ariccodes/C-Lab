#include<stdio.h>

int main(){
	double p,t,r;
	printf("Enter your principal,time and rate:");
	scanf("%lf%lf%lf",&p,&t,&r);
	printf("Simple Interest: %lf",(p*t*r)/100);
	return 0;
}
