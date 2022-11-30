#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
	//srand((unsigned) time(NULL));
	
	//int* ptr = NULL;
	//int num, i;
	//printf("请输入要创建的数组大小：");
	//scanf("%d", &num);
	//ptr = (int*)malloc(num * sizeof(int));

	/*for (i = 0; i < num; i++)
	{
		ptr[i] =(int) rand() % 10;
	}*/

	// 通过memset函数对数组进行初始化
	//memset(ptr, 0, num * sizeof(int));
	
	
	//for (i = 0; i < num; i++)
	//{
	//	printf("%d  ", ptr[i]);
	//}

	//free(ptr);
	
	
	// 如果最初分配的内存空间大小不够了
	// 有以下方式处理
	// 方式一拷贝到更大的内存空间中
	//int* ptr1 = NULL;
	//int* ptr2 = NULL;

	//ptr1 = (int*)malloc(10 * sizeof(int));
	//// 经过一系列操作后，ptr1的内存空间不够使用了，
	//// 在开辟一个更大的，把ptr1的数据拷贝到ptr2中
	//ptr2 = (int*)malloc(20 * sizeof(int));
	//memcpy(ptr2, ptr1, 10);// 从ptr1中拷贝10个数据到ptr2中

	//free(ptr1);
	//free(ptr2);

	// 通过realloc函数同样可以达到上面的效果
	

	// 根据用户输入，不断增加内存空间大小，不使用malloc
	int* ptr = NULL;
	int num = 0;
	int length = 0;
	while (1)
	{
		printf("请输入一个数保存在数组里：");
		scanf("%d", &num);
		
		if (num == -1) {
			break;
		}

		/*ptr2 = calloc(length + 1,sizeof(int));
		memcpy(ptr2, ptr, length * sizeof(int));
		temp = ptr;
		ptr = ptr2;
		ptr[length] = num;

		free(temp);*/

		length++;
		ptr = (int*)realloc(ptr, length * sizeof(int));
		if (ptr == NULL)
		{
			exit(1);
		}
		ptr[length-1] = num;

		printf("当前数组保存数据为：");
		for (int i = 0; i < length; i++)
		{
			printf("%d  ", ptr[i]);
		}

		printf("\n");
	}

	return 0;
}