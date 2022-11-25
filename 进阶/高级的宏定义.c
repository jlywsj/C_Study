#include <stdio.h>

#define PI 3.14
#define R 6371  // 地球的半径
#define V PI * R * R * R * 4 / 3  // 宏定义的嵌套求地球的体积

#define MAX(x,y) (((x) > (y)) ? (x) : (y) ) // 带参数的宏定义

int main(void){
	int r;
	float s;
	printf("请输入圆的半径：");
	scanf("%d",&r);
// #undef PI	// PI的作用域到这里结束
	s = PI * r * r;
	printf("圆的面积是：%.2f\n",s);
	
	int x,y;
	printf("请输入两个整数：");
	scanf("%d%d",&x,&y);
	printf("较大的数是：%d \n",MAX(x, y));

	return 0;
}