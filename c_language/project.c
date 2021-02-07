#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main1(void)
{
	//점점 더 어려워지는 곱셈

	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++)
	{
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		int q;
		int answer = -1;
		int level = i;
		printf("\n\n######## %d 번째 비밀번호 ########\n", level);
		printf("\n\t     %d X %d는?\n\n", num1, num2);
		printf("#################################\n");
		printf("\n비밀번호를 입력하세요. (종료 : -1) >>");
		if (scanf_s("%d", &answer) == 0)
		{
			for (;;)
			{
				printf("\n비밀번호를 입력하세요(숫자만). (종료 : -1) >>");
				while (getchar() != '\n');
				//                rewind(stdin);                     //어떻게 해야 중복없이 난수를 출력
								//fflush(stdin);                   //하는가.
				if (scanf_s("%d", &answer) == 1)    //숫자입력할때 한번에 입력하는 방법
				{                                  //찾는중.
					break;
				}
			}
		}
		if (answer == -1)
		{
			printf("\n프로그램을 종료합니다.\n"); exit(0);
		}
		else if (answer == num1 * num2)
		{
			printf("\n정답입니다.\n");
			count++;
		}
		else
		{
			printf("\n틀렸습니다.");
		}
		printf("\n%d 개의 비밀번호를 맞췄습니다.", count);
	}
	return 0;
}


int getRandomNumber(int level)
{
	return rand() % (level * 5) + 1;
}
//void showQuestion(int level, int num1, int num2)
//{
//    printf("\n\n######## %d 번째 비밀번호 ########\n", level);
//    printf("\n\t     %d + %d는?\n\n", num1, num2);
//    printf("#################################\n");
//    printf("\n비밀번호를 입력하세요. (종료 : -1) >>");