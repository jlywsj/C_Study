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
        "����",
        "��",
        18
    };

    // �ṹ��
    pritnf("������%s\n�Ա�%s\n���䣺%d\n",stu->name,stu->sex,stu->age);

    return 0;
}