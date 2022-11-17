#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void printOneByOne(unsigned int number) {
	if (number > 9) {
		printOneByOne(number / 10);
	}

	printf("%d ", number % 10);
}

// 在有序数组中查找指定数值所在的索引
int bindSearch(int x,int* arr, int left, int right) {
	int m = (left + right) / 2;

	if (*(arr + m) < x) {
		left = m + 1;
		return bindSearch(x, arr, m, right);
	}

	if (*(arr + m) > x) {
		right = m - 1;
		return bindSearch(x, arr, left, m);
	}

	if (*(arr+m) == x)
	{
		return m;
	}

	return -1;
}

// 计算数组长度
int my_strlen(char* str) {
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else {
		return 0;
	}
}

// 计算整形数值的位数
int my_intlen(int num) {
	if (num != 0) {
		return 1 + my_intlen(num / 10);
	}
	else
	{
		return 0;
	}
}

// 阶乘
int factorial(int num){
	if (num <= 1) {
		return 1;
	}
	else
	{
		return num * factorial(num - 1);
	}
}

// 斐波那契数列
//int fib(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//
//	return fib(n - 1) + fib(n - 2);
//}

// 1 1 2 3 5 8 13 21 34...
int fib(int n) {
	int a = 1;
	int b = 1;
	if (n <= 2) {
		return 1;
	}

	for (int i = 3; i <= n; i++) {

	}
}