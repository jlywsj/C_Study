#include <stdio.h>
#include <strUtil.h>
	
int main()
{
	int* arr = NULL;
	int len = 0;
	printf("请输入>>>");
	len = getIntArr(&arr); // 传入指针的地址
	
	for (int i = 0; i < len; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}