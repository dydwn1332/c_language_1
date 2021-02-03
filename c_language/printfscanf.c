#include <stdio.h>
int main_printfscanf(void)
{
	//int age = 12;
	//printf("%d\n", age);
	//age++;
	//printf("%d\n", age);

	//float f = 46.5f;
	//printf("%.2f\n", f);
	//double b = 46.55;
	//printf("%.2f\n", b);

	//const int year = 2000;
	//printf("태어난 년도: %d\n", year);

	//int add = 3 + 7;
	//printf("3 + 7 = %d\n", add);
	//printf("%d + %d = %d\n", 3, 7, add);

	//int input;
	//printf("값을 입력하시오 :");
	//scanf_s("%d", &input);
	//printf("입력값 : %d\n", input);

	//char c = 'A';
	//printf("%c\n", c);

	//char 영어[256];
	//scanf_s("%s", 영어, sizeof(영어));
	//printf("%s\n", 영어);

	//이름, 나이, 몸무게, 키, 범죄명 조사
	char name[256];
	printf("이름을 입력하시오 :");
	scanf_s("%s", &name, sizeof(name));

	int age;
	printf("나이를 입력하시오 :");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게를 입력하시오 :");
	scanf_s("%f", &weight);

	double height;
	printf("키를 입력하시오 :");
	scanf_s("%lf", &height);

	char what[256];
	printf("범죄명을 입력하시오 :");
	scanf_s("%s", &what, sizeof(what));

	printf("%s\n%d\n%.2f\n%.2lf\n%s", name, age, weight, height, what);

	printf("\n\n-----신상 정보-----\n\n");
	printf("이름       :%s\n", name);
	printf("나이       :%d\n", age);
	printf("몸무게     :%.2f\n", weight);
	printf("키         :%.2lf\n", height);
	printf("범죄명     :%s\n", what);

	return 0;
}