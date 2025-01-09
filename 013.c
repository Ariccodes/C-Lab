#include<stdio.h>

int main(){
	float x;
	printf("Enter a tempertaure:");
	scanf("%f",&x);
//	C = (F - 32) × 5/9
//	F = C×(9/5)+32
    printf("%.1fF=%.1fC\n%.1fC=%.1fF",x,(x-32.0)*(5.0/9.0),x,x*(9.0/5.0)+32.0);
	return 0;
}
