#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 要改变指针的值需要获取的是指针的地址
int getIntArr123(int **ret)
{
	
	printf("请输入：");

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

		if (ch != '\n') {
			while (isspace(ch)  || ch < 48 || ch > 57)
			{
				ch = getchar();
			}
		}
	}

	return count;
}


int main(void)
{
	int* ptr = NULL;
	int len = 0;
	len = getIntArr123(&ptr);	// 传递指针的地址
	

	for (int i = 0; i < len; i++)
	{
 		printf("ptr[%d] = %d\n",i, ptr[i]);
	}

	return 0;
}