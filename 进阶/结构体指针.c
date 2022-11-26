#include <stdio.h>

struct Stu
{
    char * name;
    char *sex;
    int age;
};

int main(void)
{
    struct Stu *stu = {
        "张三",
        "男",
        18
    };

    // 结构体
    pritnf("姓名：%s\n性别：%s\n年龄：%d\n",stu->name,stu->sex,stu->age);

    return 0;
}