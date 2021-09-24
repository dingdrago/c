#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void shuChuDesc() {
	int arr[3],j,k,temp;
	printf("请输入三个数（以空格相隔）");
	for (size_t i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);

	}
	for (j = 0;j < 3;j++) {
		for (k = j + 1;k < 3;k++) {
			if (arr[j] > arr[k]) {
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}
	printf("降序排序后的值为：\n");
	for (j = 0;j < 3;j++) {
		printf("%d\t", arr[j]);
	}
}