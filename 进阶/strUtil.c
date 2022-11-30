#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char* inStr()
{
	static char* ptr;
	int len = 0;
	char ch;
	while ((ch = getchar()) != '\n')
	{
		ptr = realloc(ptr, ++len);
		ptr[len - 1] = ch;
	}

	ptr[len] = '\0';    //最后一定要填上结束符
	return ptr;
}

int* str_to_arrInt() {
	static char* str = NULL;
	static int* reptr = NULL;
	char ch;
	int len = 0;
	int count = 0;
	int flag = 0;

	ch = getchar();
	while (ch != '\n')
	{
		while (!isspace(ch)) {
			flag = 1;
			str = (char*)realloc(str, ++len * sizeof(char));
			str[len - 1] = ch;
			ch = getchar();
		}

		if (flag) {
			reptr = (int*)realloc(reptr, ++count * sizeof(int));
			reptr[count - 1] = atoi(str);
			len = 0;
			flag = 0;
			free(str);
			str = NULL;
		}
		else {
			ch = getchar();
		}
	}


	return reptr;
}

int get_intarray_len(int* p) {
	int len = 0;
	while (*p<=57 && *p >=48)
	{
		p++;
		len++;
	}

	return len;
}