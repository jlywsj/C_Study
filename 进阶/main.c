#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "functions.h"
#include <string.h>
int main() {
	// �����ӡ
	/*unsigned int num = 0;
	scanf("%d", &num);
	printOneByOne(num);*/

	// ���ֲ���
	/*int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int index = bindSearch(3, arr, 0, 9);
	if (index != -1) {
		printf("�ҵ�ֵ������Ϊ��%d", index);
	}
	else
	{
		printf("δ�ҵ�ֵ");
	}*/

	/*char arr[] = "I love c";
	int num = 1234;

	printf("%s�ĳ����ǣ�%d\n%d��λ���ǣ�%d", arr, my_strlen(arr), num, my_intlen(num));*/

	int num;
	scanf("%d", &num);
	//printf("%d�Ľ׳���%d\n", num, factorial(num));

	printf("%d��쳲��������е�ֵΪ%d\n", fib(num));

	return 0;
}