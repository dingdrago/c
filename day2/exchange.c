#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//使用临时变量交换两个数的值
void huanZhi() {
	int zhi1, zhi2,temp;
	printf("请输入两个整数，方便对他们进行换值：\n");
	scanf("%d%d", &zhi1, &zhi2);
	printf("原值为：\t%d\t%d\n", zhi1, zhi2);
	temp = zhi1;
	zhi1 = zhi2;
	zhi2 = temp;
	printf("交换后的值为：\t%d\t%d\n", zhi1, zhi2);

}
