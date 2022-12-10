#include <stdio.h>
#include <strUtil.c>


//int getMax(int* arr,int ptr, int len)
//{
//	if (ptr == len-1) {
//		return arr[ptr];
//	}
//	int num = getMax(arr, ptr + 1, len);
//	return arr[ptr] > num ? arr[ptr] : num;
//}

int getMax(int* arr, int ptr, int len)
{
	int lmax = 0;
	int rmax = 0;
	if (len > ptr) {
		lmax = getMax(arr, ptr, (ptr + len) / 2);
		rmax = getMax(arr, (ptr + len) / 2 + 1, len); // ���mid �� + 1 �Ļ������������ݹ����� getMax(arr, 0 , 1)�᲻�ϵı��ݹ����
	}
	else
	{
		return arr[ptr];
	}

	return lmax > rmax ? lmax : rmax;
}

int main(void)
{
	int* arr;
	int len = getIntArr(&arr);
	printf("���ֵ��%d\n", getMax(arr, 0, len));

	return 0;
}