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
	//printf("�¾ �⵵: %d\n", year);

	//int add = 3 + 7;
	//printf("3 + 7 = %d\n", add);
	//printf("%d + %d = %d\n", 3, 7, add);

	//int input;
	//printf("���� �Է��Ͻÿ� :");
	//scanf_s("%d", &input);
	//printf("�Է°� : %d\n", input);

	//char c = 'A';
	//printf("%c\n", c);

	//char ����[256];
	//scanf_s("%s", ����, sizeof(����));
	//printf("%s\n", ����);

	//�̸�, ����, ������, Ű, ���˸� ����
	char name[256];
	printf("�̸��� �Է��Ͻÿ� :");
	scanf_s("%s", &name, sizeof(name));

	int age;
	printf("���̸� �Է��Ͻÿ� :");
	scanf_s("%d", &age);

	float weight;
	printf("�����Ը� �Է��Ͻÿ� :");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �Է��Ͻÿ� :");
	scanf_s("%lf", &height);

	char what[256];
	printf("���˸��� �Է��Ͻÿ� :");
	scanf_s("%s", &what, sizeof(what));

	printf("%s\n%d\n%.2f\n%.2lf\n%s", name, age, weight, height, what);

	printf("\n\n-----�Ż� ����-----\n\n");
	printf("�̸�       :%s\n", name);
	printf("����       :%d\n", age);
	printf("������     :%.2f\n", weight);
	printf("Ű         :%.2lf\n", height);
	printf("���˸�     :%s\n", what);

	return 0;
}