#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
char* getWord(char c)
{
	switch (c)
	{
	case 'a':	return "Apple";	// 返回的字符串存储在静态存储区中，不会随着函数结束而销毁;
	case 'b':	return "Banana";
	case 'c':	return "Cat";
	case 'd':	return "Dog";
	default:
		return "None";
	}
}

int main()
{
	char input;
	printf("请输入一个字母:");
	scanf("%c", &input);

	char *p = getWord(input);

	printf("%s\n", p);
	return 0;
}