#include<stdio.h>

int main(){
	int h,m,s;
	printf("Enter time(in HH:MM:SS):");
	scanf("%02i:%02i:%02i",&h,&m,&s);
	printf("%02i:%02i:%02i",h,m,s);
	return 0;
}
