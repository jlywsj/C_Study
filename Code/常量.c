#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 枚举常量
// 枚举 -- 一一列举
//		可以被列举出来的有限的集合
// 性别
// 基础颜色
// 星期

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
	// 创建枚举常量的形式
	printf("%d\n", Monday);	// 0
	printf("%d\n", Tuesday);	// 1
	printf("%d\n", Wednesday);	// 2

	return 0;
}



// #define 定义标识符常量
#define MAX 10

int main1() {
	int arr1[10] = { 0 }; // 10为字面常量，是一个常量

	//int n = 10;
	//int arr[n] = { 0 }; error 定义数组长度需要的是常量值

	const int n = 10;	// 常变量，具有常量特性的变量，不能修改，但是本质还是一个变量
	//int arr[n] = { 0 };	error n的本质还是一个变量并不是常量
	//n = 20; error  n是常变量不能被修改


	int arr2[MAX] = { 0 }; // true

	return 0;
}