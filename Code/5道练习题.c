#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

#define true 1
#define false 0
int factorial() {
	int n;
	printf("������һ����:");
	scanf("%d", &n);
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	if (n < 0) {
		printf("�������󣬲���С��0\n");
		printf("����������:");
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
	printf("������һ����:");
	scanf("%d", &n);
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	if (n < 0) {
		printf("�������󣬲���С��0\n");
		printf("����������:");
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

// ����ָ�������ʱ�򴫵ݵ���ָ�룬�������飬�Ǳ��������׵�ַ��ָ�����
// ����ͨ��sizeof arr ����������ĳ���
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

// �������������ʹ�ö��ֲ���
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
	// 1. ����n�Ľ׳�
	//printf("%d", factorial());


	// 2. ���� 1! + 2! + ... + 10!
	//printf("%d", addFactorial());

	// 3. ��һ�����������в���ĳ�������ĳ������n����дint binsearch(int x, int v[], int n); ��v�����в���x
	/*int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int x;
	printf("����Ҫ���ҵ�ֵ����������:");
	scanf("%d", &x);
	printf("����Ϊ��%d", binsearch(1,arr));*/

	// 4. ��д����ʵ����ʾ����ַ��������ƶ������м���
	/*char str[34] = "Hello World. Hello Jin Liuyang !!!";
	printfCharacter(str);*/


	// 5. ��д����ģ���û�ʵ�ʵ�¼�龰������ֻ�ܵ�¼3�Σ��������3�Σ��˳�����
	/*void login(char psw[]);
	
	char psw[] = "root";
	login(psw);*/


	// 6. ���ֲ�������������ֵ
	/*int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	
	int index = bindGetIndex(3, arr2, 0, 8);
	printf("���ҵ�����ֵΪ:%d", index);*/
	

	return 0;
}

void login(char psw[]) {
	int count = 0;
	char flag = false;
	while (count < 3)
	{
		printf("��������>>> ");
		char arr[20] = "";
		scanf("%s", arr);
		char ch;
		while ((ch = getchar()) != EOF && ch != '\n') {}
		
		if (!strcmp(arr, "root") && count < 2)		// ����ֱ���ж��ַ�������ȣ�Ӧ��ʹ��string���е�strcmp����
		{
			printf("%d", strcmp(arr, "root"));
			printf("��������Ƿ���������(Y/N)");
			ch = getchar();
			if (ch == 'Y' || ch == 'y')
			{
				count++;
				continue;
			}
			else
			{
				printf("��¼ʧ��!!!");
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
		printf("��½�ɹ�!!!");
	}
	else
	{
		printf("��¼ʧ�ܣ�������Ӻ�����!!!");
	}
}