#include <stdio.h>

int main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int a = scanf("%d%d%d", &num1, &num2,&num3);	// scanf返回值为接收数据的个数

	int sum = num1 + num2;
	printf("sum = %d\n", sum);
	printf("a = %d\n", a);
	return 0;
}