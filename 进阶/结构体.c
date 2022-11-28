#include <stdio.h>


struct A
{
    char a;
    int b;
    char c;
} a = {'x', 520, '0'},c;

struct B
{
    char a;
    int b;
    char c;
};

int main(void)
{


    // struct B b;
    // b = a; 报错，类型不同
    c = a;

    // printf("size of a = %d\n", sizeof(a));
    // printf("size of c = %d\n",sizeof(c));

    printf("a %p\n",&a);
    printf("c %p\n",&c);
    printf("%d",offset(c));

    return 0;
}