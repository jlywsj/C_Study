#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "functions.h"
#include <string.h>
int main() {
	// �����ӡ
	/*unsigned int num = 0;
	scanf("%d", &num);
	printOneByOne(num);*/

	// ���ֲ���
	/*int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int index = bindSearch(3, arr, 0, 9);
	if (index != -1) {
		printf("�ҵ�ֵ������Ϊ��%d", index);
	}
	else
	{
		printf("δ�ҵ�ֵ");
	}*/

	/*char arr[] = "I love c";
	int num = 1234;

	printf("%s�ĳ����ǣ�%d\n%d��λ���ǣ�%d", arr, my_strlen(arr), num, my_intlen(num));*/

	//int num;
	//scanf("%d", &num);
	//printf("%d�Ľ׳���%d\n", num, factorial(num));

	//printf("%d��쳲��������е�ֵΪ%d\n",num, fib(num));

	//int n;
	//printf("�������ӵ����������ɲ���:");
	//scanf("%d", &n);
	//hanoita(n, 'x', 'y', 'z');
	//system("pause");

	//int n;
	//printf("������̨�׵Ĳ�����");
	//scanf("%d", &n);
	//int count = frog2(n);
	//printf("����%d������", count);

	// ָ��ָ���ָ��
	//int num = 520;
	//int* p = &num;
	//int** pp = &p;

	//printf("value = %d\n", num);
	//printf("*p = %d\n", *p);
	//printf("&p = %p\n", &p);
	//printf("pp = %p\n", pp);
	//printf("*pp = %p\n", *pp);
	//printf("**pp = %d\n", **pp);

	// ָ��ָ���ָ�밸����
	//char* cBooks[] = {
	//	"��C����������ԡ�",
	//	"��Cר�ұ�̡�",
	//	"��C��ָ�롷",
	//	"��C������ȱ�ݡ�",
	//	"��C Primer Plus��",
	//	"������ѧC����ɡ�" };
	//char** byFishC;	// ָ��ָ���ָ��
	//char** jiayuLoves[4]; // ָ��ָ���ָ�������

	//byFishC = &cBooks[5];	// ָ�� ����ĵ�5��Ԫ�صĵ�ַ"������ѧC����ɡ�"
	//jiayuLoves[0] = &cBooks[0];	// ָ��ָ���ָ������ĵ�һ��Ԫ��ָ������ĵ�һ��Ԫ��
	//jiayuLoves[1] = &cBooks[1];// ָ��ָ���ָ������ĵڶ���Ԫ��ָ������ĵڶ���Ԫ��
	//jiayuLoves[2] = &cBooks[2];
	//jiayuLoves[3] = &cBooks[3];

	//printf("*byFishC = %s\n", *byFishC);	// ���%s��Ҫ�����׵�ַ����ָ���׵�ַ��ָ�� *byFishC
	//
	//for (int i = 0; i < 4; i++)
	//{
	//	printf("cBooks[%d] = %s\n", i,cBooks[i]);
	//	printf("*jiayuLoves[%d] = %s\n",i, *jiayuLoves[i]);	// jiayuLoves[0] ָ�����ָ������[0]��ָ��;
	//}

	// ����ָ��Ͷ�ά����
	//int array[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//int* p = array;
	//int i;
	//
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\n", *(p + i));	  // p + i <=> p+i * sizeof(int)
	//}

	int arr[3][4];

	int k = 0;
	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 4; j++) {
			arr[i][j] = k++;
		}
	}

	//int** p = arr;


		/*for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 4; j++) {
				printf("%-3d",*(*(arr+i)+j));
			}
			printf("\n");

		}*/

	//int (* p)[4] = arr;

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		printf("%-3d", *(* (p + i) + j));
	//	}
	//	printf("\n");
	//}

	//int* p[4] = {arr,arr+1,arr+2,arr+3};	// ���峤��Ϊ4��intָ������
	//printf("%d",*p[1]);

	int(*p)[4] = arr;	// p��ָ����4��int����Ԫ�ص���Ϊ�����ָ��
	// ��ʱ p + 1  => p + 4 * sizeof(int);
	// *p = arr[0]
	// *(p+1) = arr[1]

	printf("%p\n", *p);
	printf("%p\n", arr[0]);

	return 0;
}