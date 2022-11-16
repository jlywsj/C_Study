#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char arr1[30] = "hello";
	char* arr2 = "world";
	
	// strlen ��ȡ�ַ�������
	printf("the length of arr1 is %d\n", strlen(arr1));

	// strcpy �ַ�����ֵ
	//char arr3[10];
	char* arr3 = (char *)malloc(10*sizeof(char));
	//char* arr3 = "";  ���� dest������Ҫ�ȷ����㹻�ڴ�
	strcpy(arr3, arr1);
	printf("arr3 is copied from arr1 %s\n", arr3);

	strncpy(arr3, "abcde", 3);	// ԭ����arr�����еĺ���2���ַ���Ȼ����
	printf("arr3 is copied from arr1 of the first three %s (The remaining characters still exist)\n", arr3);

	// strcat ���ַ���׷�ӵ����棬��ҪԴ�ַ������㹻�Ŀռ�
	strcat(arr1, arr3);
	printf("append arr3 to the end of arr1 is %s\n", arr1);

	// strncat ׷��ָ���ַ�����
	strncat(arr1, arr3, 3);
	printf("append three characters from arr3 to the end of arr1 is %s\n", arr1);

	// strcmp �ַ����Ƚϣ������ַ������бȽϣ�����ֵΪ-1 0 1 �Ƚϵ��Ǵ�ͷ��βÿһ���ַ���ASCII��ֵ
	char abc[] = "abc";
	char de[] = "de";
	printf("\"abc\" compare \"de\" result is %d\n", strcmp(abc, de));	// ��Ϊ d ����ֵ < e ����ֵ������-1

	// strchr �ַ��������ַ������ַ����в���ָ�����ַ�����ָ��ָ���һ�γ��ֵĵ�ַ
	// strrchr �ַ��������ַ�������ָ��ָ���Ӵ����һ�γ��ֵĵ�ַ

	char* source = "abcde efg";
	char ch = 'e';
	char* p1 = strchr(source, ch);
	if (p1 != NULL) {
		printf("search character %c\n", *p1);
	}

	// strpbrk �ַ�������һ���ַ��е�����һ��������ָ��ָ���һ�γ��ֵİ��������е��ַ�
	char* p2 = strpbrk(source, "bde");
	if (p2 != NULL) {
		printf("search character %c\n", *p2);
	}

	// strstr ���ַ����в���ָ���Ӵ�������ָ��ָ���Ӵ���һ�γ��ֵ����ַ��ĵ�ַ
	char* p3 = strstr(source, "cde");
	if (p3 != NULL) {
		printf("search character %c\n", *p3);
	}

	printf("source's e = %p\np1 = %p\n", &source[4], p1);		// ��ͬ

	printf("%s\n", source);
	printf("%s\n", p1);

    return 0;
}