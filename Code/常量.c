#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// ö�ٳ���
// ö�� -- һһ�о�
//		���Ա��оٳ��������޵ļ���
// �Ա�
// ������ɫ
// ����

enum Sex
{
	MALE,FEMALE,SECRET,Monday
};

enum week
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Fridy,
	Saturday, 
	Sunday
};

int main() {
	// ����ö�ٳ�������ʽ
	printf("%d\n", Monday);	// 0
	printf("%d\n", Tuesday);	// 1
	printf("%d\n", Wednesday);	// 2

	return 0;
}



// #define �����ʶ������
#define MAX 10

int main1() {
	int arr1[10] = { 0 }; // 10Ϊ���泣������һ������

	//int n = 10;
	//int arr[n] = { 0 }; error �������鳤����Ҫ���ǳ���ֵ

	const int n = 10;	// �����������г������Եı����������޸ģ����Ǳ��ʻ���һ������
	//int arr[n] = { 0 };	error n�ı��ʻ���һ�����������ǳ���
	//n = 20; error  n�ǳ��������ܱ��޸�


	int arr2[MAX] = { 0 }; // true

	return 0;
}