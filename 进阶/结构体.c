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
//    // b = a; 报错，类型不同
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
	printf("请输入书名：");
	scanf("%s", book->title);
	printf("请输入作者：");
	scanf("%s", book->author);
	printf("请输入售价：");
	scanf("%f", &book->price);
	printf("请输入出版日期：");
	scanf("%d-%d-%d", &book->date.year, &book->date.month, &book->date.day);
	printf("请输入出版社：");
	scanf("%s", book->publisher);
}

void printBook(struct Book book) {
	printf("书名 :%s\n", book.title);
	printf("作者 :%s\n", book.author);
	printf("售价 :%.2f\n", book.price);
	printf("出版日期 : %d-%d-%d\n", book.date.year, book.date.month, book.date.day);
}


int main(void)
{
	/*struct Book b1;
	struct Book b2;*/
	struct Book* b1, * b2;
	b1 = (struct Book*)malloc(sizeof(struct Book));
	b2 = (struct Book*)malloc(sizeof(struct Book));

	printf("请录入第一本书的信息....\n");
	getInput(&b1);

	printf("请录入第二本书的信息....\n");
	getInput(&b2);

	//printBook(b1);
	//putchar("\n");
	//printBook(b2);

	
	// 使用malloc必须释放
	free(b1);
	free(b2);


	return 0;
}