#include<stdio.h>

int main(){
	int divisor,dividend;
	printf("Enter your divisor and dividend:");
	scanf("%i%i",&divisor,&dividend);
	printf("Quotient:%d   Remainder:%d",dividend/divisor,dividend%divisor);
	return 0;
}
