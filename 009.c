#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter 3 numbers:");
	scanf("%i%i%i",&a,&b,&c);
	if(a>=b && a>=c){
		printf("The largest is %i",a);
	}
	else if(b>=a && b>=c){
		printf("The largest is %i",b);
	}
	else{
		printf("The largest is %i",c);
	}
	return 0;
}
