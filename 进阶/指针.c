#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define pi 10;
int main()
{
	//int n = 10;
	// 指向常量的指针
	//const int m = 50;	
	//const int* pn = &n;
	//int* pm = &m;
	//int* const p = &n;

	//// 通过指针修改常变量的值，是可以的
	//*pm = 20;
	//printf("const int m = %d\n", m);
	//// 指向常量的指针的值是可以修改的
	//pn = &m;
	//printf("%d\n", *p);

	int n = 10;
	const int m = 20;
	const int* pn = &n;
	const int* const pm = &m;

	//printf("n = %d, m = %d\n", *pn, *pm);

	n = 10;
	printf("n = %d", *pn);

	return 0;
}