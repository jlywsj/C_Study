#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Ҫ�ı�ָ���ֵ��Ҫ��ȡ����ָ��ĵ�ַ
int getIntArr123(int **ret)
{
	
	printf("�����룺");

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
			// �����ȼ�������
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
	len = getIntArr123(&ptr);	// ����ָ��ĵ�ַ
	

	for (int i = 0; i < len; i++)
	{
 		printf("ptr[%d] = %d\n",i, ptr[i]);
	}

	return 0;
}