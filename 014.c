#include<stdio.h>
#include<math.h>

int main(){
	int x,n;
	printf("Enter 2 integers:");
	scanf("%d %d",&x,&n);
	printf("%d raised to the power %d is %.0lf",x,n,pow(x,n));
	return 0;
}
