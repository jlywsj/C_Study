#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void game() {
	// 在调用rand函数之前需要先调用srand设置一个随机数生成器
	int randInt = rand() % 100 + 1;		// 生成1 - 100 之间的随机数
	int gess = -1;
	int count = 0;
	char arr[30] = {'\0'};
	system("cls");
	printf("请输入要猜的数字(1-100)：");
	do
	{
		count++;
		scanf("%d", &gess);
		if (gess < randInt)
		{
			system("cls");
			printf("猜小了，请再输一次：");
		}
		if (gess > randInt)
		{
			system("cls");
			printf("猜大了，请再输一次：");
		}
	} while (gess != randInt);
	
	if (count <= 5) {
		strcpy(arr,"大聪明，为父很欣慰!!！");
	}
	else
	{
		strcpy(arr,"笨比.");
	}

	printf("恭喜你才对了，正确的答案是：%d，你一共猜了%d次，真是个%s\n",gess,count,arr);

}

int main() {
	srand((unsigned int)time(NULL));	// 设置随机数生成器，一个程序只需要设置一次
	int flag = 1;

	do {
		system("cls");
		printf("***********************************\n");
		printf("*****   1. play   2. exit     *****\n");
		printf("***********************************\n");
		int a = _getch();   // _getch() 不需要按下回车就会响应键盘事件
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
			printf("*****        退出游戏         *****\n");
			printf("***********************************\n");
			flag = 0;
			break;
		default:
			printf("输入错误\n");
			break;
		}

	} while (flag);

	return 0;
}