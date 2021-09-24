#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void maxValue() {
	int count=0,arr[10],i,max,j;
	printf("请输入十个整数（每输入一次按一次enter键），以求出最大值\n");
	while (count<10)
	{
		j = count + 1;
		printf("第%d个数:", j);
		scanf("%d", &arr[count]);
		count++;

	}
	max = arr[0];
	for (i = 1;i < 10;i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("输入的十个数的最大值为%d", max);
}