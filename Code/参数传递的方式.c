#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ֵ���ݣ�����Ӱ��ԭ��������
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = a;
}

// ��ַ���ݣ����ô��ݣ���Ӱ��ԭ��������
void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int prome(int num) {
	for (int i = 1; i < num; i++) {
		if (num / i * i == num)
		{
			return 0;
		}
	}
	return 1;
}

int main() {
	int a = 10;
	int b = 20;

	// ֵ���ݲ���ı�ֵ
	//swap1(a, b);
	//printf("a = %d, b = %d ", a, b);

	swap2(&a, &b);
	printf("a = %d, b = %d ", a, b);    // ��ַ���ݻ�ı�ֵ


	return 0;
}