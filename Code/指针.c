#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main(){
    //int a = 10; // ���ڴ�����4��byte�Ŀռ�
    //// ָ�������������ŵ�ַ�ı���
    //int* p = &a;    // ȡ��ַ����ֵ��intָ�����p����
    //int* pp = &p;
    //printf("%p\n", &a);
    //printf("%p\n", p);
    //printf("%p\n", pp);

    //*p = 20;    // * �����ò�������

    //printf("%d\n", a); // %p ��ӡ��ַ

    printf("%d\n", sizeof(char*));
    return 0;
}