#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*void maxYueShu() {
	int j,arr[2],max,min,arr2[20],arr3[20];
	printf("请输入两个整数，以求它们的最大公约数");
	for (j = 0;j < 2;j++) {
		scanf("%d",arr[j]);
	}
	if (arr[0] > arr[1]) {
		max = arr[0];
		min = arr[1];
		
	}
	else
	{
		max = arr[1];
		min = arr[0];
	}
	if (max % min == 0) {
		printf("这两个数的最大公约数为%d", min);
	}
	else {
		arr2=yueShu(arr[0]);
		arr3=yueShu(arr[1]);
	}

}

yueShu(int a) {
	int i,arr2[20],count;
	for (i = 2;i < a/2;i++) {
		if (a % i == 0) {
			arr2[count] = i;
			arr2[count + 1] = a / i;
			count++;
		}
	}
	return arr2;
}*/

//暴力穷举法
void yueShu() {
	int j, arr[2],i,k;
	printf("请输入两个整数，以求它们的最大公约数");
	for (j = 0;j < 2;j++) {
		scanf("%d", &arr[j]);
	}
	if (arr[0] > arr[1]) {
		for (i = arr[1];i >= 1;i--) {
			if (arr[0] % i == 0 && arr[1] % i == 0) {
				printf("最大公约数为：%d", i);
				break;
			}
		}
	}
	else
	{
		for (k = arr[0];k >= 1;k--) {
			if (arr[0] % k == 0 && arr[1] % k == 0) {
				printf("最大公约数为：%d", k);
				break;
			}
		}
	}
}