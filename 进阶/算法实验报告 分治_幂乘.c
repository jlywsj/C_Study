#include <stdio.h>
#include <math.h>

// ���β��Խ���ݳ����� ������������
int count = 0;
int get_pow(int x, int y)
{
	count++;
	if (y == 1) {
		return x;
	}
	else {
		if (y % 2 == 0) {
			return get_pow(x, y / 2) * get_pow(x, y / 2);
		}
		else {
			return get_pow(x, (y - 1) / 2) * get_pow(x, (y - 1) / 2) * x;
		}
	}
}


// ������������
int get_pow2(int x, int y)
{
	count++;
	if (y == 1) {
		return x;
	}
	else {
		int num = 0;
		if (y % 2 == 0) {
			num = get_pow(x, y / 2);
			return num * num;
		}
		else {
			num = get_pow(x, (y - 1) / 2);
			return num * num * x;
		}
	}
}

float get_minus(int x, int y)
{
	if (y > 0) {
		return (float) 1 / get_pow(x, y);
	}
	else {
		return (float) 1 / get_pow(x, -y);
	}
}


int main(void)
{
	/*printf("��������������ݳ���������㷨��\n");
	printf("get_pow(4,5)=%d\n",get_pow(4, 5));
	printf("get_pow(2,10)=%d\n", get_pow(2, 10));*/

	printf("2 ** -2 = %.2f\n", get_minus(2, -2));

	return 0;
}