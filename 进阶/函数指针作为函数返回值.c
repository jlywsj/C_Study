#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int add(int, int); // 函数的声明可以省略参数名，但是参数类型不能省略
int sub(int, int);
// (*)（int,int) 表示一个函数指针，参数为两个int类型
int calc(int (*)(int, int), int, int);	// 函数声明，把参数的名字全部省略

// 优先级解析：
// 	1. select(char) 是一个函数，
//	2. 返回值类型 * 是一个指针，
//	3. 返回值参数是(int, int);
int (*select(char))(int, int); // 此处解析考虑的优先级问题，需要这样处理

char ch = ' ';

int (*select(char op))(int, int)
{
	switch (op)
	{
	case '+': return add;
	case '-': return sub;
	}
}

int add(int n, int m)
{
	return n + m;
}

int sub(int n, int m)
{
	return n + m;
}

int calc(int (*fp)(int, int), int n, int m)
{
	return (*fp)(n, m);
}

// 去除字符串前后空格
char* trim(char* str) {
	char* head = NULL;	// 因为要返回head，head可能不会进入if语句 不进行赋值会报错
	char* end;

	if (str) {
		head = str;	// 指向头部
		end = head + strlen(str) - 1;	// 指向尾部

		// 如果 head 不为EOF 即在 0 - 127中
		while (*head && isspace(*head)) {
			free(head++);	// 销毁空间，并让head+1
		}

		while (end > head && isspace(*end)) {
			free(end--);	// 销毁空间，并让end-1
		}
	}

	return head;
}

int main()
{
	int n, m;
	
	char* op = (char *)malloc(30*sizeof(char));
	
	printf("输入表达式(加减)：");
	
	scanf("%d%s%d",&n,op,&m);		// scanf认为空字符是结束字符
	
	//gets(op);	// gets会读取空字符，知道遇到回车才算结束
	
	int (*p)(int, int) = select(n, m);
	printf("%d %s %d = %d\n", n, op, m, calc(p, n, m));

	return 0;
}
