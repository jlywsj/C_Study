#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char a = 0, b = 0;  // char 类型的值是 0 - 127 之间，占一个字节 8 位 二进制数
	int* p = (int*)&b;	// int类型指针指向的地址是int 类型， 占 4 个字节 16 为 二进制数

	*p = 258;	// 0000 0001 0000 0010 把p指向的int类型0地址改为258如上图,剩下的高位全部补0

	printf("a = %d, b = %d", a, b);	// 读取b时，只读取到了低位的char类型的一个字节长度，即 0000 0010 输出结果十进制为 2

	return 0;
}