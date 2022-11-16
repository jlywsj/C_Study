#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 值传递，不会影响原来的数据
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = a;
}

// 地址传递（引用传递）会影响原来的数据
void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int prome(int num) {
	for (int i = 1; i < num; i++) {
		if (num / i * i == num)
		{
			return 0;
		}
	}
	return 1;
}

int main() {
	int a = 10;
	int b = 20;

	// 值传递不会改变值
	//swap1(a, b);
	//printf("a = %d, b = %d ", a, b);

	swap2(&a, &b);
	printf("a = %d, b = %d ", a, b);    // 地址传递会改变值


	return 0;
}