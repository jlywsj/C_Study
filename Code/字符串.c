#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// 宏定义函数
#define MAX(a,b) a>b?a:b

int main(){
    //char arr1[] = "abc"; // 字符串放在字符数组中
    // "abc" -- 'a' 'b' 'c' '\0'    --- \0 字符串的结束标志
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

    /*printf("%c\n", "\32");*/  // \32 表示两位八进制数字    32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符，x32 -- 作为十六进制数进行计算
    // \ddd -- 表示1~3位八进制数字  \xdd -- 表示1~2位16进制数字

    //auto a = 2.00;
    //printf("%f\n");

    int a = 10;
    int b = 20;
    int max = MAX(a, b);
    printf("max = %d\n", max);

    return 0;
}