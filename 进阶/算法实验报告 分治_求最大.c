#include <stdio.h>
#include <strUtil.c>


int getMax(int* arr,int ptr, int len)
{
	if (ptr == len-1) {
		return arr[ptr];
	}
	int num = getMax(arr, ptr + 1, len);
	return arr[ptr] > num ? arr[ptr] : num;
}

int getMax(int* arr, int ptr, int len)
{
	if (ptr == len) {
		return arr[ptr];
	}
	else {
		int lmax = getMax(arr, ptr, (ptr + len) / 2);
		int rmax = getMax(arr, (ptr + len) / 2, len);
		return lmax > rmax ? lmax : rmax;
	}
}

int main(void)
{
	int* arr;
	int len = getIntArr(&arr);
	printf("最大值是%d\n", getMax(arr,0,len));

	return 0;
}