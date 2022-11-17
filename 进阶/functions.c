#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void printOneByOne(unsigned int number) {
	if (number > 9) {
		printOneByOne(number / 10);
	}

	printf("%d ", number % 10);
}

// �����������в���ָ����ֵ���ڵ�����
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

// �������鳤��
int my_strlen(char* str) {
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else {
		return 0;
	}
}

// ����������ֵ��λ��
int my_intlen(int num) {
	if (num != 0) {
		return 1 + my_intlen(num / 10);
	}
	else
	{
		return 0;
	}
}

// �׳�
int factorial(int num){
	if (num <= 1) {
		return 1;
	}
	else
	{
		return num * factorial(num - 1);
	}
}


// 쳲���������
// ͨ���ݹ�ʵ�֣�Ч�ʵͣ��ظ������ظ���ֵ�ʺ��õ����ķ���
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
	// �Ƚ�����������Ƶ�z�ᣬ�ٽ����һ�������Ƶ�z��
	if (n <= 1) {
		printf("%c --> %c\n", x, z);
	}
	else
	{
		hanoita(n - 1, x, z, y);	// ��x�������n-1��ͨ��z���ƶ���y
		printf("%c --> %c\n", x, z); // ��x���������һ������ֱ���ƶ���z��
		hanoita(n - 1, y, x, z);	// �ٽ�y���ϵ�����ͨ��x�ƶ���z
	}


}


// ������̨�ף�ʹ�õݹ飬�����Ѿ��ڵ�n��̨��������
// ÿ��̨������������ ��1�� ����2��
// ÿһ�ζ�������µķ�֧��ֱ���÷�֧��n <= 0 ʱ��ʾ�����֧�Ѿ�����
// n<=0ʱ��count++����һ����������
// ע�⣺������ֻʣһ��̨��ʱ������̨�׵���������ȡ
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