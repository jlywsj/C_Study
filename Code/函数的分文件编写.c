#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "add.h"

int main()
{
	int a = 10;
	int b = 20;

	int sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}