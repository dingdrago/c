#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ж���������Ƿ�Ϊ����
void oddFirst() {
	int a;
again:
	printf("������һ���������Ա����ж����Ƿ�Ϊ����\n");
	scanf("%d", &a);
	if (a % 2 != 0) {
		printf("��ϲ�����ˣ�%dΪ����\n", a);
	}
	else
	{
		printf("%d��������\n", a);
		goto again;
	}
}