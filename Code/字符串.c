#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// �궨�庯��
#define MAX(a,b) a>b?a:b

int main(){
    //char arr1[] = "abc"; // �ַ��������ַ�������
    // "abc" -- 'a' 'b' 'c' '\0'    --- \0 �ַ����Ľ�����־
    //char arr2[] = { 'a','b','c', 0}; 
    // 'a' 'b' 'c' '\0'

    /*printf("%s\n", arr2);
    printf("%s\n", arr1);
    printf("arr1 = %d\n", &arr1);
    printf("arr2 = %d\n", &arr2);*/

    /*char arr1[] = "abc";
    char arr2[] = { 'a','b','c' };

    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));*/

    /*printf("%c\n", "\32");*/  // \32 ��ʾ��λ�˽�������    32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ���x32 -- ��Ϊʮ�����������м���
    // \ddd -- ��ʾ1~3λ�˽�������  \xdd -- ��ʾ1~2λ16��������

    //auto a = 2.00;
    //printf("%f\n");

    int a = 10;
    int b = 20;
    int max = MAX(a, b);
    printf("max = %d\n", max);

    return 0;
}