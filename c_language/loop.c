#include <stdio.h>
int main(void)
{
	//printf("hello world");

	/*int a = 10;
	printf("%d", a);*/

	//int b = 1;
	//printf("b는 %d\n", ++b);
	//printf("b는 %d\n", b++);
	//printf("b는 %d\n", b);

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
	//int j;                   //구구단
	//for (i = 1; i <= 9; i++)
	//{
	//	printf("%d단\n", i);
	//	for (j = 1; j <= 9; j++)
	//	{
	//		printf("   %d x %d = %d\n", i, j, i*j);
	//	}
	//}
	int line;
	int j;
	int a;
	int input = 0;

	for (;;)
	{
		printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
		printf("@                                  @\n");
		printf("@       @       @        @  @@@@@  @\n");
		printf("@ @@@@@ @ @@@@@ @  @@@@@ @  @      @\n");
		printf("@  @ @  @     @ @  @   @ @  @      @\n");
		printf("@  @ @  @ @@@@@ @@ @   @ @  @      @\n");
		printf("@  @ @  @ @     @  @   @ @  @@@@@  @\n");
		printf("@ @@@@@ @ @@@@@ @  @@@@@ @         @\n");
		printf("@       @       @        @ @@@@@@@ @\n");
		printf("@                                  @\n");
		printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
		printf("값을 입력하시오(종료:-1) :");
		if (scanf_s("%d", &input) != 1)
		{
			for (;;)
			{
				printf("\n숫자를 입력하시오(종료:-1) :");
				while (getchar() != '\n');  
				if (scanf_s("%d", &input) == 1)
				{
					break;
				}
			}
		}
		if (input == -1)
		{
			printf("프로그램을 종료합니다.");
			exit(0);
		}
		
		for (line = 0; line < input; line++)
		{
			for (a = line; a <= input - 1; a++)
			{
				printf(" ");
			}
			for (j = 0; j <= line * 2; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n\n");
	}
	return 0;
}