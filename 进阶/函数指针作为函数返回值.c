#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int add(int, int); // ��������������ʡ�Բ����������ǲ������Ͳ���ʡ��
int sub(int, int);
// (*)��int,int) ��ʾһ������ָ�룬����Ϊ����int����
int calc(int (*)(int, int), int, int);	// �����������Ѳ���������ȫ��ʡ��

// ���ȼ�������
// 	1. select(char) ��һ��������
//	2. ����ֵ���� * ��һ��ָ�룬
//	3. ����ֵ������(int, int);
int (*select(char))(int, int); // �˴��������ǵ����ȼ����⣬��Ҫ��������

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

// ȥ���ַ���ǰ��ո�
char* trim(char* str) {
	char* head = NULL;	// ��ΪҪ����head��head���ܲ������if��� �����и�ֵ�ᱨ��
	char* end;

	if (str) {
		head = str;	// ָ��ͷ��
		end = head + strlen(str) - 1;	// ָ��β��

		// ��� head ��ΪEOF ���� 0 - 127��
		while (*head && isspace(*head)) {
			free(head++);	// ���ٿռ䣬����head+1
		}

		while (end > head && isspace(*end)) {
			free(end--);	// ���ٿռ䣬����end-1
		}
	}

	return head;
}

int main()
{
	int n, m;
	
	char* op = (char *)malloc(30*sizeof(char));
	
	printf("������ʽ(�Ӽ�)��");
	
	scanf("%d%s%d",&n,op,&m);		// scanf��Ϊ���ַ��ǽ����ַ�
	
	//gets(op);	// gets���ȡ���ַ���֪�������س��������
	
	int (*p)(int, int) = select(n, m);
	printf("%d %s %d = %d\n", n, op, m, calc(p, n, m));

	return 0;
}
