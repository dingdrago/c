#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void huanZhiTiGao() {
	int a, b;
	printf("������������������������ǽ��л�ֵ��\n");
	scanf("%d%d", &a, &b);
	printf("ԭֵΪ��\t%d\t%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("���ĺ��ֵΪ��\t%d\t%d\n", a, b);

}