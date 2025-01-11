#include<stdio.h>
#define pi 3.14159

int main(){
	float radius;
	printf("Enter the radius of the circle:");
	scanf("%f",&radius);
	printf("Area:%f   Perimeter:%f",pi*radius*radius,2*pi*radius);
	return 0;
}
