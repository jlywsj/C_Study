#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void recursion();

void recursion()
{
	static int count = 10;
	printf("H1!\n");
	if (--count) {
		recursion();
	}
}

int main()
{
	recursion();
	return 0;
}