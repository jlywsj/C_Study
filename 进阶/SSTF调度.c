//  ���Ѱ�����ȵ����㷨
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void getResult(int* ptr, int cur_val, int count)
{
	int nextIndex = -1;
	int distance = -1;	// �洢��ǰ�����Ҫ�ƶ��ľ���
	int temp = 0;	// ����ʱ��ʱ�洢��Ҫ�ƶ��ľ���
	int time = 0;
	float sum = 0;

	while (1)
	{
		if (time == count) {
			break;
		}

		for (int i = 0; i < count; i++)
		{
			if (ptr[i] == -1) {
				continue;
			}

			temp = abs(cur_val - ptr[i]);
			if (temp <= distance || distance == -1) {
				distance = temp;
				nextIndex = i;
			}
		}

		if (time == 0) printf("next\tdistance\n");
		printf("%d\t%d\n", ptr[nextIndex], distance);
		cur_val = ptr[nextIndex];
		ptr[nextIndex] = -1;
		sum += distance;
		distance = -1;
		time++;
	}
	printf("ƽ��Ѱ�����ȣ�%.1f", floor(sum * 10 / count) / 10.0);	// ȡ����������
}

int main()
{
	int count = 0;
	int* ptr = NULL;
	int cur_p = 0;

	printf("�������ж��ٸ�I/O����");
	scanf("%d", &count);
	ptr = realloc(ptr, count * sizeof(int));

	for (int i = 0; i < count; i++) {
		printf("�������%d���ŵ��ţ�", i);
		scanf("%d", &ptr[i]);
	}

	printf("�����뵱ǰ�Ĵŵ��ţ�");
	scanf("%d", &cur_p);
	system("cls");
	getResult(ptr, cur_p, count);
	free(ptr);
	return 0;
}
