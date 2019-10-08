#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Practice 6*/
int main(int argc, char *argv[]) {
	
	int answer = 59;
	int input;
	int cnt=0;//처음에 0으로 초기화 하고 얼만에 맞췄냐 세는 변수를 설정. count의 줄임말. 
	
	do
	{
		printf("guess a number:");
		scanf("%d",&input);
		if (input < answer)
		{
			printf("low!\n");
		}
		else if (input > answer)
		{
			printf("high!\n");
		}
		cnt++;
	 } 
	 while(input != answer);
	 
	 printf("Congratulation. trial : %i\n", cnt);
	 
	return 0;
}
