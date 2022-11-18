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

	//int num;
	//scanf("%d", &num);
	//printf("%d的阶乘是%d\n", num, factorial(num));

	//printf("%d的斐波那契数列的值为%d\n",num, fib(num));

	//int n;
	//printf("输入盘子的数量，生成步骤:");
	//scanf("%d", &n);
	//hanoita(n, 'x', 'y', 'z');
	//system("pause");

	//int n;
	//printf("请输入台阶的层数：");
	//scanf("%d", &n);
	//int count = frog2(n);
	//printf("共有%d种跳法", count);

	// 指向指针的指针
	//int num = 520;
	//int* p = &num;
	//int** pp = &p;

	//printf("value = %d\n", num);
	//printf("*p = %d\n", *p);
	//printf("&p = %p\n", &p);
	//printf("pp = %p\n", pp);
	//printf("*pp = %p\n", *pp);
	//printf("**pp = %d\n", **pp);

	// 指向指针的指针案例：
	//char* cBooks[] = {
	//	"《C程序设计语言》",
	//	"《C专家编程》",
	//	"《C和指针》",
	//	"《C陷阱与缺陷》",
	//	"《C Primer Plus》",
	//	"《带你学C带你飞》" };
	//char** byFishC;	// 指向指针的指针
	//char** jiayuLoves[4]; // 指向指针的指针的数组

	//byFishC = &cBooks[5];	// 指向 数组的第5个元素的地址"《带你学C带你飞》"
	//jiayuLoves[0] = &cBooks[0];	// 指向指针的指针数组的第一个元素指向数组的第一个元素
	//jiayuLoves[1] = &cBooks[1];// 指向指针的指针数组的第二个元素指向数组的第二个元素
	//jiayuLoves[2] = &cBooks[2];
	//jiayuLoves[3] = &cBooks[3];

	//printf("*byFishC = %s\n", *byFishC);	// 输出%s需要的是首地址，及指向首地址的指针 *byFishC
	//
	//for (int i = 0; i < 4; i++)
	//{
	//	printf("cBooks[%d] = %s\n", i,cBooks[i]);
	//	printf("*jiayuLoves[%d] = %s\n",i, *jiayuLoves[i]);	// jiayuLoves[0] 指向的是指向数组[0]的指针;
	//}

	// 数组指针和二维数组
	//int array[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//int* p = array;
	//int i;
	//
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\n", *(p + i));	  // p + i <=> p+i * sizeof(int)
	//}

	int arr[3][4];

	int k = 0;
	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 4; j++) {
			arr[i][j] = k++;
		}
	}

	//int** p = arr;


		/*for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 4; j++) {
				printf("%-3d",*(*(arr+i)+j));
			}
			printf("\n");

		}*/

	//int (* p)[4] = arr;

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		printf("%-3d", *(* (p + i) + j));
	//	}
	//	printf("\n");
	//}

	//int* p[4] = {arr,arr+1,arr+2,arr+3};	// 定义长度为4的int指针数组
	//printf("%d",*p[1]);

	int(*p)[4] = arr;	// p是指向含有4个int类型元素的以为数组的指针
	// 此时 p + 1  => p + 4 * sizeof(int);
	// *p = arr[0]
	// *(p+1) = arr[1]

	printf("%p\n", *p);
	printf("%p\n", arr[0]);

	return 0;
}