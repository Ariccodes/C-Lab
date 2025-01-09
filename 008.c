#include<stdio.h>

int main(){
	int x;
	printf("Enter a number:");
	scanf("%i",&x);
	if(x%2==0){
		printf("EVEN");
	}
	else{
		printf("ODD");
	}
	return 0;
}
