#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 + num2;
}

// 参数为函数指针
int calc(int (*p)(int,int),int num1,int num2)
{
	// (*p)(num1,num2)
	return p(num1, num2);
}

int main()
{
	printf("3 + 5 = %d\n", calc(add,3, 5));
	printf("5 - 9 = %d\n", calc(sub, 5, 9));

	return 0;
}