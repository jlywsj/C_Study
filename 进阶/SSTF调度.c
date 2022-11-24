//  最短寻道优先调度算法
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void getResult(int* ptr, int cur_val, int count)
{
	int nextIndex = -1;
	int distance = -1;	// 存储当前最短需要移动的距离
	int temp = 0;	// 遍历时临时存储需要移动的距离
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
	printf("平均寻道长度：%.1f", floor(sum * 10 / count) / 10.0);	// 取消四舍五入
}

int main()
{
	int count = 0;
	int* ptr = NULL;
	int cur_p = 0;

	printf("请输入有多少个I/O请求：");
	scanf("%d", &count);
	ptr = realloc(ptr, count * sizeof(int));

	for (int i = 0; i < count; i++) {
		printf("请输入第%d个磁道号：", i);
		scanf("%d", &ptr[i]);
	}

	printf("请输入当前的磁道号：");
	scanf("%d", &cur_p);
	system("cls");
	getResult(ptr, cur_p, count);
	free(ptr);
	return 0;
}
