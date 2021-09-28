#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	/*char arr[] = "bit";*/
	/*printf("%d", my_strlen(arr));*/
	int n = 0;
	printf("请输入大于0的整数");
	scanf("%d", &n);
	printf("%d", FeiFunction(n));
	return 0;
}