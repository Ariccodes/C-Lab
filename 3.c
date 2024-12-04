#include <stdio.h>

int main(){
  int x,y;
  printf("Enter two numbers:");
  scanf("%d%d",&x,&y);
  printf("The sum of %i and %i is %i \n The average of %i and %i is %i",x,y,x+y,x,y,(x+y)/2);
  return 0;
} 
