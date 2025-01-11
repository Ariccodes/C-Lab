#include<stdio.h>

int main(){
	printf("\\n creates a new line.\n\n");
	getch();
	printf("\\b creates backspace.\b\b");
	getch();
	printf("\n\\t inserts some whitespace which is basically a couple of backspaces.\t\t");
	getch();
	printf("\n\\v apparently inserts vertical space.\v\v");
	getch();
	return 0;
}
