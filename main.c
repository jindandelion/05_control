#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Practice1*/
	
	int x;
	
	printf("input a number:");
	scanf("%d",&x);
	
	if(x>0)
		printf("positive\n", x);
	else
		printf("non-positive\n",-x);
	/*Practice2*/
	
	int a;
	printf("input a number:");
	scanf("%d", &a);
	
	if (a>0)
		printf("|x| = %d\n", a);
	else
		printf("|x| = %d\n", -a);
		
	/*Practice3*/
	int input;
	
	printf("input a number");
	scanf("%d", &input);
	
	if(input>0)
	{
		printf("positive\n");
		
	}
	else if(input<0)
	{
		printf("negative\n");
	}
	else
	{
		printf("0\n"); 
	}
	return 0;
}
