#include <stdio.h>
#include <strUtil.c>

// flag表示获取最大或最小
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

// 使用递归实现需求
int main(void)
{
	// 需求一：从键盘输入n个整数（或实数），计算并显示这n个整数中的最大值（和 / 或最小值）。
	int* arr1 = NULL;
	int arr_len = getIntArr(&arr1);	// getIntArr为自定义函数，功能是读取一串字符串，若合法则 转为整形数组

	int max = getMax_Min(arr1, 0, arr_len, 1);
	int min = getMax_Min(arr1, 0, arr_len, 0);
	// 需求二：从键盘输入n个整数（或实数），计算并显示这n个整数（或实数）之和。
	int sum = getSum(arr1, 0, arr_len);
	
	printf("最大值为：%d，最小值为：%d，和为%d\n", max, min,sum);
	return 0;
}