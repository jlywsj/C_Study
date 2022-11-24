#define _CRT_SECURE_NO_WARNINGS 1

//  锟斤拷锟窖帮拷锟斤拷锟斤拷鹊锟斤拷锟斤拷惴�
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void getResult(int* ptr, int cur_val, int count)
{
	int nextIndex = -1;
	int distance = -1;	// 锟芥储锟斤拷前锟斤拷锟斤拷锟揭拷贫锟斤拷木锟斤拷锟�
	int temp = 0;	// 锟斤拷锟斤拷时锟斤拷时锟芥储锟斤拷要锟狡讹拷锟侥撅拷锟斤拷
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

		if(time == 0) printf("next\tdistance\n");
		printf("%d\t%d\n", ptr[nextIndex], distance);
		cur_val = ptr[nextIndex];
		ptr[nextIndex] = -1;
		sum += distance;
		distance = -1;
		time++;
	}

	printf("平锟斤拷寻锟斤拷锟斤拷锟饺ｏ拷%.1f", floor(sum*10/count)/10.0);	// 取锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷
}

int main()
{
	int count = 0;
	int* ptr = NULL;
	int cur_p = 0;

	printf("锟斤拷锟斤拷锟斤拷锟叫讹拷锟劫革拷I/O锟斤拷锟斤拷");
	scanf("%d", &count);
	ptr = realloc(ptr, count * sizeof(int));

	for (int i = 0; i < count; i++) {
		printf("锟斤拷锟斤拷锟斤拷锟�%d锟斤拷锟脚碉拷锟脚ｏ拷",i);
		scanf("%d", &ptr[i]);
	}

	printf("锟斤拷锟斤拷锟诫当前锟侥磁碉拷锟脚ｏ拷");
	scanf("%d", &cur_p);

	system("cls");
	getResult(ptr, cur_p, count);
	
	free(ptr);

	return 0;
}
