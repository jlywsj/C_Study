#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {
	/*int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("����һ");
		break;
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("������");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("������");
		break;
	case 6:
		printf("������");
		break;
	case 7:
		printf("������");
		break;
	default:
		printf("�������");
		break;
	}*/

	/*float a;
	scanf("%f", &a);
	printf("%f", a);*/

	int ch;
	while ((ch = getchar()) != EOF)
	{
		// ASCII ��ֵ ������ 48 - 57 ��Χ�����¶�ȡ
		if (ch < '0' || ch > '9') {
			continue;
		}

		putchar(ch);
	}
	return 0;
}