#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ʹ����ʱ����������������ֵ
void huanZhi() {
	int zhi1, zhi2,temp;
	printf("������������������������ǽ��л�ֵ��\n");
	scanf("%d%d", &zhi1, &zhi2);
	printf("ԭֵΪ��\t%d\t%d\n", zhi1, zhi2);
	temp = zhi1;
	zhi1 = zhi2;
	zhi2 = temp;
	printf("�������ֵΪ��\t%d\t%d\n", zhi1, zhi2);

}