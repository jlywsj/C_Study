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
	//printf("������Ҫ�����������С��");
	//scanf("%d", &num);
	//ptr = (int*)malloc(num * sizeof(int));

	/*for (i = 0; i < num; i++)
	{
		ptr[i] =(int) rand() % 10;
	}*/

	// ͨ��memset������������г�ʼ��
	//memset(ptr, 0, num * sizeof(int));
	
	
	//for (i = 0; i < num; i++)
	//{
	//	printf("%d  ", ptr[i]);
	//}

	//free(ptr);
	
	
	// ������������ڴ�ռ��С������
	// �����·�ʽ����
	// ��ʽһ������������ڴ�ռ���
	//int* ptr1 = NULL;
	//int* ptr2 = NULL;

	//ptr1 = (int*)malloc(10 * sizeof(int));
	//// ����һϵ�в�����ptr1���ڴ�ռ䲻��ʹ���ˣ�
	//// �ڿ���һ������ģ���ptr1�����ݿ�����ptr2��
	//ptr2 = (int*)malloc(20 * sizeof(int));
	//memcpy(ptr2, ptr1, 10);// ��ptr1�п���10�����ݵ�ptr2��

	//free(ptr1);
	//free(ptr2);

	// ͨ��realloc����ͬ�����Դﵽ�����Ч��
	

	// �����û����룬���������ڴ�ռ��С����ʹ��malloc
	int* ptr = NULL;
	int num = 0;
	int length = 0;
	while (1)
	{
		printf("������һ���������������");
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

		printf("��ǰ���鱣������Ϊ��");
		for (int i = 0; i < length; i++)
		{
			printf("%d  ", ptr[i]);
		}

		printf("\n");
	}

	return 0;
}