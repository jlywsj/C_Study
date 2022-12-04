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

// 要改变指针的值需要获取的是指针的地址
int getIntArr(int **ret)
{
	char* str = NULL;
	*ret = NULL;
	char ch = getchar();
	int len = 0;
	int count = 0;

	while (ch != '\n')
	{
		while (!isspace(ch) && ch != EOF && ch >= 48 && ch <= 57)
		{
			str = realloc(str, ++len * sizeof(char));
			str[len - 1] = ch;
			ch = getchar();
		}
		
		if (str != NULL) {
			*ret = realloc(*ret, ++count * sizeof(int));
			// 有优先级的问题
			(*ret)[count - 1] = atoi(str);
			free(str);	
			str = NULL;
			len = 0;
		}

		while ((isspace(ch)  || ch < 48 || ch > 57) && ch != '\n')
		{
			ch = getchar();
		}
	}

	return count;
}