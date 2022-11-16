#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main(){
    //int a = 10; // 向内存申请4个byte的空间
    //// 指针变量：用来存放地址的变量
    //int* p = &a;    // 取地址，赋值给int指针变量p保存
    //int* pp = &p;
    //printf("%p\n", &a);
    //printf("%p\n", p);
    //printf("%p\n", pp);

    //*p = 20;    // * 解引用操作符，

    //printf("%d\n", a); // %p 打印地址

    printf("%d\n", sizeof(char*));
    return 0;
}