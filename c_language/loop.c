#include <stdio.h>
int main(void)
{
	//printf("hello world");

	/*int a = 10;
	printf("%d", a);*/

	//int b = 1;
	//printf("b�� %d\n", ++b);
	//printf("b�� %d\n", b++);
	//printf("b�� %d\n", b);

	//int i = 1;
	//printf("hello world %d\n", i++);
	//printf("hello world %d\n", i++);
	//printf("hello world %d\n", i++);
	//printf("hello world %d\n", i++);
	//printf("hello world %d\n", i++);
	//printf("hello world %d\n", i++);
	//printf("hello world %d\n", i++);

	//for (int i = 1;; i++)
	//{
	//	printf("hello world %d\n", i);
	//}

	//int i = 1;
	//while (i < 10)
	//{
	//	printf("hello world %d\n", i++);
	//}

	//int i; 
	//int j;                   //������
	//for (i = 1; i <= 9; i++)
	//{
	//	printf("%d��\n", i);
	//	for (j = 1; j <= 9; j++)
	//	{
	//		printf("   %d x %d = %d\n", i, j, i*j);
	//	}
	//}
	for (;;)
	{
		int line;
		int j;
		int a;
		int input = 0;
		printf("���� �Է��Ͻÿ�(����:0) :");
		if (scanf_s("%d", &input) == 0)
		{
			for (;;)
			{
				printf("\n���ڸ� �Է��Ͻÿ� :");
				if (scanf_s("%d", &input) == 0)
				{
					break;
				}


			}
		}
		int b = input;

		for (line = 0; line <= input; line++)
		{
			b--;
			for (a = 0; a <= b; a++)
			{
				printf(" ");
			}
			for (j = 0; j <= line * 2; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}