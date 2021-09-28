#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "initArray.h";
int main() {
	
	/*int array2[5] = { 0 };
	int size = sizeof(array2) / sizeof(array2[0]);
	printf("%d\n", size);
	init(array2, size);
	return 0;*/
	int arr[10] = { 0 };

	int sz = sizeof(arr) / sizeof(arr[0]);

	printf("%dhello\n", sz);
	Init(arr, sz);//数组初始化
}
