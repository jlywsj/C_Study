#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {
	/*int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("星期一");
		break;
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("星期三");
		break;
	case 4:
		printf("星期四");
		break;
	case 5:
		printf("星期五");
		break;
	case 6:
		printf("星期六");
		break;
	case 7:
		printf("星期日");
		break;
	default:
		printf("输入错误");
		break;
	}*/

	/*float a;
	scanf("%f", &a);
	printf("%f", a);*/

	int ch;
	while ((ch = getchar()) != EOF)
	{
		// ASCII 码值 不属于 48 - 57 范围内重新读取
		if (ch < '0' || ch > '9') {
			continue;
		}

		putchar(ch);
	}
	return 0;
}