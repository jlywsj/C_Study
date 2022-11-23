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

void hanoi(int n, char x, char y, char z) {
	if (n == 1) {
		printf("%c --> %c\n", x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);
		printf("%c --> %c\n", x, z);
		hanoi(n - 1, y, x, z);
	}
}

int main()
{
	//recursion();
	int n;
	printf("ÇëÊäÈëººÅµËşµÄ²ãÊı£º");
	scanf("%d",&n);
	hanoi(n, 'x', 'y', 'z');
	return 0;
}