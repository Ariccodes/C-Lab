#include<stdio.h>

int main(){
	/*
	i didn't know what portion of the salary was needed to be allocated so i chatgpt'd for some standard values to follow.
    	HRA = 20% of Basic Salary.
        DA = 50% of Basic Salary.
        PF = 12% of Basic Salary.
        Gross Salary = Basic Salary + HRA + DA - PF.
    */
    float salary;
    printf("Enter your salary:");
    scanf("%f",&salary);
    printf("Gross salary: %.2f",salary+(salary/5.0)+(salary/2.0)-((3.0*salary)/25.0));
	return 0;
}
