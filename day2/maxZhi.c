#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void maxValue() {
	int count=0,arr[10],i,max,j;
	printf("������ʮ��������ÿ����һ�ΰ�һ��enter��������������ֵ\n");
	while (count<10)
	{
		j = count + 1;
		printf("��%d����:", j);
		scanf("%d", &arr[count]);
		count++;

	}
	max = arr[0];
	for (i = 1;i < 10;i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("�����ʮ���������ֵΪ%d", max);
}