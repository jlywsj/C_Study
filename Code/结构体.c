#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
struct Book
{
    char name[20];  // ����
    float price;  // �۸�
};

int main(){
    // ���ýṹ�����ʹ���һ�������͵ı���
    struct Book b1 = {"C���Գ������",55.6};
    //printf("%sһ���ļ۸�Ϊ%f", b1.name, b1.price);
    struct Book* pb = &b1;
    printf("%s   %f", (*pb).name, (*pb).price); // д��1
    printf("%s   %f", pb->name, pb->price); // д��2
    /*
        .   �ṹ�����.��Ա
        ->  �ṹ��ָ��->��Ա
    */

    // ����name����
    // ����ʹ�� b1.name,��Ϊname��������һ�����飬����ֱ���޸�
    // ����ͨ�� string.h���е�strcopy������copy������ֵ
    strcopy(b1.name,"C++"); // ����1��Ҫ�ı�ı���������2��ֵ

    return 0;
}