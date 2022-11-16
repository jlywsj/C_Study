#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

#define true 1
#define false 0
int factorial() {
	int n;
	printf("请输入一个数:");
	scanf("%d", &n);
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	if (n < 0) {
		printf("输入有误，不能小于0\n");
		printf("请重新输入:");
		return factorial();
	}

	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}

	return result;
}

int addFactorial() {
	int n;
	printf("请输入一个数:");
	scanf("%d", &n);
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	if (n < 0) {
		printf("输入有误，不能小于0\n");
		printf("请重新输入:");
		return factorial();
	}

	int sum = 1;
	int retValue = 0;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
		retValue += sum;
	}

	return retValue;
}

int binsearch(int x, int v[]) {
	int index = -1;
	int len = sizeof(v) / sizeof(v[0]);
	for (int i = 0; i < len; i++)
	{
		if (v[i] == x)
		{
			index = i;
			break;
		}
	}

	return index;
}

char* createArray(int n) {
	char* arr;
	arr = (char*)malloc(n * sizeof(char));
	for (int i = 0; i < n; i++)
	{
		arr[i] = '#';
	}
	return arr;
}

// 传递指针参数的时候传递的是指针，不是数组，是保存数组首地址的指针变量
// 不能通过sizeof arr 来计算数组的长度
void printfCharacter(char arr[]) {
	int len =  34;
	char* chars = createArray(len);
	int count = len % 2 == 0 ? len / 2 : len / 2 + 1;
	for (int i = 0; i < count; i++)
	{
		chars[i] = arr[i];
		chars[len - 1 - i] = arr[len - 1 - i];
		printf("%s\n", chars);
		Sleep(500);
		system("cls");
	}
}

// 在有序的数组中使用二分查找
int bindGetIndex(int x, int arr[], int left, int right) {
	while (left < right)
	{
		int midIndex = (left + right) / 2;
		if (arr[midIndex] > x)
		{
			right = midIndex - 1;
			return bindGetIndex(x, arr, left, right);
		}

		if (arr[midIndex] < x)
		{
			left = midIndex + 1;
			return bindGetIndex(x, arr, left, right);
		}

		if (arr[midIndex] == x)
		{
			return midIndex;
		}
	}

	return -1;
}

int main() {
	// 1. 计算n的阶乘
	//printf("%d", factorial());


	// 2. 计算 1! + 2! + ... + 10!
	//printf("%d", addFactorial());

	// 3. 在一个有序数组中查找某个具体的某个数字n。编写int binsearch(int x, int v[], int n); 在v数组中查找x
	/*int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int x;
	printf("输入要查找的值，返回索引:");
	scanf("%d", &x);
	printf("索引为：%d", binsearch(1,arr));*/

	// 4. 编写代码实现演示多个字符从两端移动，向中间汇聚
	/*char str[34] = "Hello World. Hello Jin Liuyang !!!";
	printfCharacter(str);*/


	// 5. 编写代码模拟用户实际登录情景，并且只能登录3次（如果错误3次，退出程序）
	/*void login(char psw[]);
	
	char psw[] = "root";
	login(psw);*/


	// 6. 二分查找在数组中找值
	/*int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	
	int index = bindGetIndex(3, arr2, 0, 8);
	printf("查找的索引值为:%d", index);*/
	

	return 0;
}

void login(char psw[]) {
	int count = 0;
	char flag = false;
	while (count < 3)
	{
		printf("输入密码>>> ");
		char arr[20] = "";
		scanf("%s", arr);
		char ch;
		while ((ch = getchar()) != EOF && ch != '\n') {}
		
		if (!strcmp(arr, "root") && count < 2)		// 不能直接判断字符串的相等，应该使用string库中的strcmp函数
		{
			printf("%d", strcmp(arr, "root"));
			printf("密码错误，是否重新输入(Y/N)");
			ch = getchar();
			if (ch == 'Y' || ch == 'y')
			{
				count++;
				continue;
			}
			else
			{
				printf("登录失败!!!");
				return;
			}
		}
		else
		{
			flag = true;
			break;
		}

		count++;
	}

	if (flag)
	{
		printf("登陆成功!!!");
	}
	else
	{
		printf("登录失败，请五分钟后重试!!!");
	}
}