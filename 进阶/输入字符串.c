#include <stdio.h>
#include <string.h>
#include "strUtil.h"
#include <stdlib.h>
int main(void)
{
	int* arr = NULL;
	arr = str_to_arrInt();
	int len = get_intarray_len(arr);

	for (int i = 0; i < len; i++) {
		printf("arr[%d] = %d\n",i, arr[i]);
	}

	return 0;
}