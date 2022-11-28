#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
char* getWord(char c)
{
	switch (c)
	{
	case 'a':	return "Apple";	// ���ص��ַ����洢�ھ�̬�洢���У��������ź�������������;
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
	printf("������һ����ĸ:");
	scanf("%c", &input);

	char *p = getWord(input);

	printf("%s\n", p);
	return 0;
}