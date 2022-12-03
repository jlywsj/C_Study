#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int getIntArr(static int *ret)
{
	
	printf("«Î ‰»Î£∫");

	char* str = NULL;
	ret = NULL;
	char ch = getchar();
	int len = 0;
	int count = 0;


	while (ch != '\n')
	{
		while (!isspace(ch) && ch != EOF)
		{
			str = realloc(str, ++len * sizeof(char));
			str[len - 1] = ch;
			ch = getchar();
		}

		ret = realloc(ret, ++count * sizeof(int));
		ret[count - 1] = atoi(str);
		free(str);
		str = NULL;
		len = 0;
		if (ch != '\n') {
			ch = getchar();
		}
	}

	return count;
}


int main(void)
{
	
	static int* ptr = NULL;
	int len = 0;
	len = getIntArr(ptr);
	printf("%d\n", len);
	
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", ptr[i]);
	}

	return 0;
}