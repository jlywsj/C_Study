#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "functions.h"
#include <string.h>
int main() {
	// 逐个打印
	/*unsigned int num = 0;
	scanf("%d", &num);
	printOneByOne(num);*/

	// 二分查找
	/*int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int index = bindSearch(3, arr, 0, 9);
	if (index != -1) {
		printf("找的值的索引为：%d", index);
	}
	else
	{
		printf("未找到值");
	}*/

	/*char arr[] = "I love c";
	int num = 1234;

	printf("%s的长度是：%d\n%d的位数是：%d", arr, my_strlen(arr), num, my_intlen(num));*/

	int num;
	scanf("%d", &num);
	//printf("%d的阶乘是%d\n", num, factorial(num));

	printf("%d的斐波那契数列的值为%d\n", fib(num));

	return 0;
}