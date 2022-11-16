#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char arr1[30] = "hello";
	char* arr2 = "world";
	
	// strlen 获取字符串长度
	printf("the length of arr1 is %d\n", strlen(arr1));

	// strcpy 字符串赋值
	//char arr3[10];
	char* arr3 = (char *)malloc(10*sizeof(char));
	//char* arr3 = "";  报错 dest参数需要先分配足够内存
	strcpy(arr3, arr1);
	printf("arr3 is copied from arr1 %s\n", arr3);

	strncpy(arr3, "abcde", 3);	// 原先在arr数组中的后面2个字符依然存在
	printf("arr3 is copied from arr1 of the first three %s (The remaining characters still exist)\n", arr3);

	// strcat 将字符串追加到后面，需要源字符串有足够的空间
	strcat(arr1, arr3);
	printf("append arr3 to the end of arr1 is %s\n", arr1);

	// strncat 追加指定字符个数
	strncat(arr1, arr3, 3);
	printf("append three characters from arr3 to the end of arr1 is %s\n", arr1);

	// strcmp 字符串比较，两个字符串进行比较，返回值为-1 0 1 比较的是从头至尾每一个字符的ASCII码值
	char abc[] = "abc";
	char de[] = "de";
	printf("\"abc\" compare \"de\" result is %d\n", strcmp(abc, de));	// 因为 d 的码值 < e 的码值，返回-1

	// strchr 字符串查找字符，在字符串中查找指定的字符返回指针指向第一次出现的地址
	// strrchr 字符串查找字符，返回指针指向子串最后一次出现的地址

	char* source = "abcde efg";
	char ch = 'e';
	char* p1 = strchr(source, ch);
	if (p1 != NULL) {
		printf("search character %c\n", *p1);
	}

	// strpbrk 字符串查找一组字符中的任意一个，返回指针指向第一次出现的包含在组中的字符
	char* p2 = strpbrk(source, "bde");
	if (p2 != NULL) {
		printf("search character %c\n", *p2);
	}

	// strstr 在字符串中查找指定子串，返回指针指向子串第一次出现的首字符的地址
	char* p3 = strstr(source, "cde");
	if (p3 != NULL) {
		printf("search character %c\n", *p3);
	}

	printf("source's e = %p\np1 = %p\n", &source[4], p1);		// 相同

	printf("%s\n", source);
	printf("%s\n", p1);

    return 0;
}