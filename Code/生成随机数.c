#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void game() {
	// �ڵ���rand����֮ǰ��Ҫ�ȵ���srand����һ�������������
	int randInt = rand() % 100 + 1;		// ����1 - 100 ֮��������
	int gess = -1;
	int count = 0;
	char arr[30] = {'\0'};
	system("cls");
	printf("������Ҫ�µ�����(1-100)��");
	do
	{
		count++;
		scanf("%d", &gess);
		if (gess < randInt)
		{
			system("cls");
			printf("��С�ˣ�������һ�Σ�");
		}
		if (gess > randInt)
		{
			system("cls");
			printf("�´��ˣ�������һ�Σ�");
		}
	} while (gess != randInt);
	
	if (count <= 5) {
		strcpy(arr,"�������Ϊ������ο!!��");
	}
	else
	{
		strcpy(arr,"����.");
	}

	printf("��ϲ��Ŷ��ˣ���ȷ�Ĵ��ǣ�%d����һ������%d�Σ����Ǹ�%s\n",gess,count,arr);

}

int main() {
	srand((unsigned int)time(NULL));	// �����������������һ������ֻ��Ҫ����һ��
	int flag = 1;

	do {
		system("cls");
		printf("***********************************\n");
		printf("*****   1. play   2. exit     *****\n");
		printf("***********************************\n");
		int a = _getch();   // _getch() ����Ҫ���»س��ͻ���Ӧ�����¼�
		switch (a)
		{
		case '1':
			game();
			system("pause");
			system("cls");
			break;
		case '2':
			system("cls");
			printf("***********************************\n");
			printf("*****        �˳���Ϸ         *****\n");
			printf("***********************************\n");
			flag = 0;
			break;
		default:
			printf("�������\n");
			break;
		}

	} while (flag);

	return 0;
}