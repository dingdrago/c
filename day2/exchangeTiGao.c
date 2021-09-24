#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void huanZhiTiGao() {
	int a, b;
	printf("请输入两个整数，方便对他们进行换值：\n");
	scanf("%d%d", &a, &b);
	printf("原值为：\t%d\t%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("更改后的值为：\t%d\t%d\n", a, b);

}