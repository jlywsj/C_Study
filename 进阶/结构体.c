#include <stdio.h>
#include <string.h>

//struct A
//{
//    char a;
//    int b;
//    char c;
//} a = {'x', 520, '0'},c;
//
//struct B
//{
//    char a;
//    int b;
//    char c;
//};
//
//int main(void)
//{
//
//
//    // struct B b;
//    // b = a; �������Ͳ�ͬ
//    c = a;
//
//    // printf("size of a = %d\n", sizeof(a));
//    // printf("size of c = %d\n",sizeof(c));
//
//    printf("a %p\n",&a);
//    printf("c %p\n",&c);
//    printf("%d",offset(c));
//
//    return 0;
//}

struct Date
{
	unsigned year;
	unsigned month;
	unsigned day;
};

struct Book
{
	char title[128];
	char author[40];
	float price;
	struct Date date;
	char publisher[40];
};


void getInput(struct Book* book) {
	printf("������������");
	scanf("%s", book->title);
	printf("���������ߣ�");
	scanf("%s", book->author);
	printf("�������ۼۣ�");
	scanf("%f", &book->price);
	printf("������������ڣ�");
	scanf("%d-%d-%d", &book->date.year, &book->date.month, &book->date.day);
	printf("����������磺");
	scanf("%s", book->publisher);
}

void printBook(struct Book book) {
	printf("���� :%s\n", book.title);
	printf("���� :%s\n", book.author);
	printf("�ۼ� :%.2f\n", book.price);
	printf("�������� : %d-%d-%d\n", book.date.year, book.date.month, book.date.day);
}


int main(void)
{
	/*struct Book b1;
	struct Book b2;*/
	struct Book* b1, * b2;
	b1 = (struct Book*)malloc(sizeof(struct Book));
	b2 = (struct Book*)malloc(sizeof(struct Book));

	printf("��¼���һ�������Ϣ....\n");
	getInput(&b1);

	printf("��¼��ڶ��������Ϣ....\n");
	getInput(&b2);

	//printBook(b1);
	//putchar("\n");
	//printBook(b2);

	
	// ʹ��malloc�����ͷ�
	free(b1);
	free(b2);


	return 0;
}