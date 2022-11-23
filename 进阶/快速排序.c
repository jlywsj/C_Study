#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void quick_sort(int array[], int left, int right)
{
	int l = left;
	int r = right;
	int temp;
	int pivot = array[(l+r)/2];

	while (array[l] < pivot)
	{
		l++;
	}

	while (array[r] > pivot)
	{
		r--;
	}

	if (l <= r)
	{
		temp = array[l];
		array[l] = array[r];
		array[r] = temp;

		l++; 
		r--;
	}

	if (left < r)
	{
		quick_sort(array, left, r);
	}

	if (l < right)
	{
		quick_sort(array, l, right);
	}
	
}

int main()
{
	int array[] = { 73, 108, 111, 118, 101, 70, 115, 104, 67, 46, 99, 111, 109 };

	int length = sizeof(array) / sizeof(array[0]);

	quick_sort(array, 0, length - 1);

	for (int i = 0; i < length; i++)
	{
		printf("%d  ", array[i]);
	}

	return 0;
}