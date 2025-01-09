#include<stdio.h>
#include<math.h>

int main(){
	int x;
	printf("Enter a number:");
	scanf("%i",&x);
	//if you use pow() ,this function returns a double so when i was using the integer identifier,i got 0 as my answer.
	printf("The cube of %i is %lf which is also equal to %i.",x,pow(x,3),x*x*x);
	return 0;
}
