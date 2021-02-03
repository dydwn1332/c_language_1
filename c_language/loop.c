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

	int i;
	int j;
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}