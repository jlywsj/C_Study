#include <stdio.h>

int main() {
	// 年龄
	// 20
	short age = 20;		//想内存申请2个字节=16 bit位 来存放20
	float weight = 95.6;	// 向内存申请4个字节存放小数
	printf("%d", &age);	// &为取址符号，获取后面变量在内存中的地址

	return 0;
}