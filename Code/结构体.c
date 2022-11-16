#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
struct Book
{
    char name[20];  // 书名
    float price;  // 价格
};

int main(){
    // 利用结构体类型创建一个该类型的变量
    struct Book b1 = {"C语言程序设计",55.6};
    //printf("%s一本的价格为%f", b1.name, b1.price);
    struct Book* pb = &b1;
    printf("%s   %f", (*pb).name, (*pb).price); // 写法1
    printf("%s   %f", pb->name, pb->price); // 写法2
    /*
        .   结构体变量.成员
        ->  结构体指针->成员
    */

    // 更改name属性
    // 不能使用 b1.name,因为name本质上是一个数组，不能直接修改
    // 可以通过 string.h库中的strcopy函数来copy拷贝赋值
    strcopy(b1.name,"C++"); // 参数1：要改变的变量，参数2：值

    return 0;
}