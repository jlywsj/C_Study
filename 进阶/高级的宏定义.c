#include <stdio.h>

#define PI 3.14
#define R 6371  // ����İ뾶
#define V PI * R * R * R * 4 / 3  // �궨���Ƕ�����������

#define MAX(x,y) (((x) > (y)) ? (x) : (y) ) // �������ĺ궨��

int main(void){
	int r;
	float s;
	printf("������Բ�İ뾶��");
	scanf("%d",&r);
// #undef PI	// PI���������������
	s = PI * r * r;
	printf("Բ������ǣ�%.2f\n",s);
	
	int x,y;
	printf("����������������");
	scanf("%d%d",&x,&y);
	printf("�ϴ�����ǣ�%d \n",MAX(x, y));

	return 0;
}