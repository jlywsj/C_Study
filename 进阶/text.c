#include <stdio.h>
#include <strUtil.h>
	
int main()
{
	int* arr = NULL;
	int len = 0;
	printf("������>>>");
	len = getIntArr(&arr); // ����ָ��ĵ�ַ
	
	for (int i = 0; i < len; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}