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
// 通过递归实现，效率低，重复计算重复的值适合用迭代的方法
//int fib(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//
//	return fib(n - 1) + fib(n - 2);
//}

// 1 1 2 3 5 8 13 21 34...
int fib(int n) {
	//  1  1  2  3  5  8  13
	//  a  b  c
	int a = 1;
	int b = 1;
	int c = 0;
	if (n <= 2) {
		return 1;
	}

	for (int i = 3; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}

	return c;
}

void hanoita(int n, char* x, char* y, char* z) {
	// 先将下面的盘子移到z轴，再将最后一个盘子移到z轴
	if (n <= 1) {
		printf("%c --> %c\n", x, z);
	}
	else
	{
		hanoita(n - 1, x, z, y);	// 将x柱上面的n-1个通过z轴移动到y
		printf("%c --> %c\n", x, z); // 将x柱最下面的一个盘子直接移动到z柱
		hanoita(n - 1, y, x, z);	// 再将y柱上的盘子通过x移动到z
	}


}


// 青蛙跳台阶，使用递归，假设已经在第n个台阶往下跳
// 每层台阶有两种跳发 跳1层 或跳2层
// 每一次都会出现新的分支，直到该分支到n <= 0 时表示这个分支已经跳完
// n<=0时，count++表明一种跳法可行
// 注意：如果最后只剩一个台阶时，两个台阶的跳法不可取
int frog(int n) {
	static count = 0;
	if (n == 0) {
		count++;
	}
	else if(n < 0){}
	else {
		frog(n - 1);
		frog(n - 2);
	}

	return count;
}

int frog2(int n) {
	int count = 0;

	if (n == 0) {
		return 1;
	}else if(n < 0){}
	else
	{
		count += frog2(n - 1);
		count += frog2(n - 2);
	}

	return count;
}