#include <stdio.h>
#include <string.h>

int main() {
	printf("%d\n", a);
	printf("char = %d\n", sizeof(char));	// 1
	printf("short = %d\n", sizeof(short));	// 2
	printf("int = %d\n", sizeof(int));	// 4
	printf("long = %d\n", sizeof(long));	// 4
	printf("long long = %d\n", sizeof(long long));	// 8
	printf("float = %d\n", sizeof(float));	// 4
	printf("double = %d\n", sizeof(double));	// 8
	return 0; 
}
