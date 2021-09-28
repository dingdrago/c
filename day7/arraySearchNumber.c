#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//在有序数组中查找指定值
void searchNumber() {
	int arra[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int value = 0;
	printf("请输入你要查找的值\n");
	scanf("%d", &value);
	int left = 0,right=sizeof(arra)/sizeof(arra[0]-1);
	int middle = (left + right) / 2;
	while (left<=right)
	{
		if (arra[middle] > value) {
			right = middle - 1;
			middle = (left + right) / 2;
		}
		else if (arra[middle] < value) {
			left = middle + 1;
			middle = (left + right) / 2;
		}
		else {
			printf("找到该数在数组中的下标了，下标为%d", middle);
			break;
		}
	}
	if (left > right) {
		printf("该数组中没有该数字");
	}
}