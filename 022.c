#include<stdio.h>

	int x=2;

int  unaccessible(){
	/*This function block is separate from the rest, almost as our own imaginary universe. If we declare x to be 3,don't get me wrong ,x indeed IS 3 BUT, only 
	  in our imaginary universe. Go to a separate imaginary universe or the real universe and you'll find a similar or a completely different reality in THEIR
      universe.*/
	int x=3;
	printf("The value of x in a separate imaginary universe is %i.\n",x);
}

int main(){
	unaccessible();
	printf("The value of x in our REAL universe is %i",x);
	return 0;
}
