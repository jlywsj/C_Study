#include <stdio.h>
#include <strUtil.c>

// flag��ʾ��ȡ������С
int getMax_Min(const int* arr, int head, int len,int flag)
{
	if (head == len - 1)
	{
		return arr[head];
	}
	else
	{
		if (flag) {
			return arr[head] > getMax_Min(arr, head + 1, len, flag) ? arr[head] : getMax_Min(arr, head + 1, len,flag);
		}
		else {
			return arr[head] < getMax_Min(arr, head + 1, len, flag) ? arr[head] : getMax_Min(arr, head + 1, len,flag);
		}
	}
}

int getSum(int* arr,int head, int len) {
	if (head == len - 1)
	{
		return arr[head];
	}
	else {
		return arr[head] + getSum(arr, head + 1, len);
	}
}

// ʹ�õݹ�ʵ������
int main(void)
{
	// ����һ���Ӽ�������n����������ʵ���������㲢��ʾ��n�������е����ֵ���� / ����Сֵ����
	int* arr1 = NULL;
	int arr_len = getIntArr(&arr1);	// getIntArrΪ�Զ��庯���������Ƕ�ȡһ���ַ��������Ϸ��� תΪ��������

	int max = getMax_Min(arr1, 0, arr_len, 1);
	int min = getMax_Min(arr1, 0, arr_len, 0);
	// ��������Ӽ�������n����������ʵ���������㲢��ʾ��n����������ʵ����֮�͡�
	int sum = getSum(arr1, 0, arr_len);
	
	printf("���ֵΪ��%d����СֵΪ��%d����Ϊ%d\n", max, min,sum);
	return 0;
}