#include<stdio.h>

int main(){
	/*
	THEORY:
	     Let's say we have two numbers, say 6 and 8. Do you know what is their HCF?
		 So we need to first understand what IS an HCF.
		 HCF is just an abbreviation, HCF stands for Highest Common Factor.But what does that REALLY mean?
		 
		 "Factor" means to be divisible......COMPLETELY divisible ,meaning no remainders. For instance,4 is not a factor of 6, because we have 2 as remainder.
		 On the other hand,2 would indeed be a factor of 6 as there is no remainder i.e. the remainder is zero.
		 
		 "Common" obviously means that two or more thing have the same thing (which in this case is factor). If jay and harry both played guitar and wrote songs, we
		 would say they both have a "common" interest.
		 
		 "Highest" is self-explanatory......if not then just google or duolingo bro. So we need to keep incrementing and find higher and higher common factors.....
		 .....BUTTT, we aren't mathematicians, we are programmers(no offense to any mathematicians reading). WHEN do we stop??? We can't just keep going higher and 
		 higher ,that would be an infinite loop which we can't do. Now here comes problem solving abilities.Let's analyze what can be the possible highest factor 
		 for a given number,if there isn't then, maybe just ditch factors and brainstorm another method by squeezing the definition.
		 Take the number 4, 1 is a factor. 2 is a factor. 3 is not a factor with 1 as remainder. 4 is a factor.5 is not a factor with 4 as remainder(in case you 
		 didn't know how we got 4 as remainder,while calculating remainder we subtract the divider from the dividend as division is just repeated subraction. But
		 ,we stop whenever the next subtraction leads to a negative. Try 7 divided by 2==>7-2=5 ==>5-2=3 ==>3-2=1 ==/==>1-2=*-1* AYO CHILL it's negative, no more 
		 subtraction 1 it is *the remainder*.)6 is not a factor with 4 as remainder.7 is not a factor with 4 as remainder.8 is not a factor with 4 as remainder....
		 Did you figure it out? Any number higher than the given number can NOT ever be a factor of that number. Think of it this way, being a factor means  
		 dividing the given number by it results in a whole number. If the denominator is greater than the numerator, we get a number between 0 and 1 i.e 0.*** . 
	*/
	int x,y,temp,i,hcf;
	printf("Enter two numbers:");
	scanf("%i %i",&x,&y);
	if(y>x){
		temp=x;
		x=y;
		y=temp;
	}
	for(i=1;i<=x;i++){
		if(x%i==0 && y%i==0){
			hcf=i;
		}
	}
	printf("The HCF of %i and %i is %i.",x,y,hcf);
	return 0;
}
