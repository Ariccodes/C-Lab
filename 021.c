#include<stdio.h>

int main(){
	int x,y,i,product=0;
	printf("Enter two numbers:");
	scanf("%i %i",&x,&y);
	for(i=0;i<y;i++){
	   product+=x;	
	}
	printf("Product: %i",product);
	return 0;
}
