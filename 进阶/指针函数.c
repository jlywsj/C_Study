#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int square(int num,int count)
{
	return num * num;
}

int main()
{
	int num;
	int (*fp)(int,int);
	printf("请输入一个整数:");
	scanf("%c", &num);
	fp = square;

	printf("%d", num);
	
	printf("%d * %d = %d\n", num, num, (*fp)(num,1));

	return 0;
}