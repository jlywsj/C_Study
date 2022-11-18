#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdarg.h>

int sum(int n, ...);

int sum(int n, ...)
{
	int i, sum = 0;
	va_list vap;
	
	va_start(vap, n);
	for (i = 0; i < n; i++) {
		sum += va_arg(vap, int);
	}

	va_end(vap);
	return sum;
}

int main()
{
	int n = sum(3, 100, 200, 500);
	printf("%d", n);

	return 0;
}