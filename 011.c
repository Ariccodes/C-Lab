#include<stdio.h>

int main(){
	int a,b,c;
	char div;
	printf("Enter your marks in subject1,subject2 and subject3:");
	scanf("%i %i %i",&a,&b,&c);
	if((a+b+c)/3.0<=20){
		div='F';
	}
	else if((a+b+c)/3.0<=40){
		div='D';
	}
	else if((a+b+c)/3.0<=60){
		div='C';
	}
	else if((a+b+c)/3.0<=80){
		div='B';
	}
	else if((a+b+c)/3.0<=100){
        div='A';	
	}
	printf("Percentage:%.2f   Division:%c",(a+b+c)/3.0,div);
	return 0;
}
