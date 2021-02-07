#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main1(void)
{
	//���� �� ��������� ����

	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++)
	{
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		int q;
		int answer = -1;
		int level = i;
		printf("\n\n######## %d ��° ��й�ȣ ########\n", level);
		printf("\n\t     %d X %d��?\n\n", num1, num2);
		printf("#################################\n");
		printf("\n��й�ȣ�� �Է��ϼ���. (���� : -1) >>");
		if (scanf_s("%d", &answer) == 0)
		{
			for (;;)
			{
				printf("\n��й�ȣ�� �Է��ϼ���(���ڸ�). (���� : -1) >>");
				while (getchar() != '\n');
				//                rewind(stdin);                     //��� �ؾ� �ߺ����� ������ ���
								//fflush(stdin);                   //�ϴ°�.
				if (scanf_s("%d", &answer) == 1)    //�����Է��Ҷ� �ѹ��� �Է��ϴ� ���
				{                                  //ã����.
					break;
				}
			}
		}
		if (answer == -1)
		{
			printf("\n���α׷��� �����մϴ�.\n"); exit(0);
		}
		else if (answer == num1 * num2)
		{
			printf("\n�����Դϴ�.\n");
			count++;
		}
		else
		{
			printf("\nƲ�Ƚ��ϴ�.");
		}
		printf("\n%d ���� ��й�ȣ�� ������ϴ�.", count);
	}
	return 0;
}


int getRandomNumber(int level)
{
	return rand() % (level * 5) + 1;
}
//void showQuestion(int level, int num1, int num2)
//{
//    printf("\n\n######## %d ��° ��й�ȣ ########\n", level);
//    printf("\n\t     %d + %d��?\n\n", num1, num2);
//    printf("#################################\n");
//    printf("\n��й�ȣ�� �Է��ϼ���. (���� : -1) >>");