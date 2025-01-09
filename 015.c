#include<stdio.h>

int main(){
	int a,b,temp;
	printf("Enter two integers:");
	scanf("%d %d",&a,&b);
	if(b>a){
		temp=a;
		a=b;
		b=temp;
	}
	printf("Difference:%d",a-b);
	return 0;
}
