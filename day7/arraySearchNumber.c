#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����������в���ָ��ֵ
void searchNumber() {
	int arra[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int value = 0;
	printf("��������Ҫ���ҵ�ֵ\n");
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
			printf("�ҵ������������е��±��ˣ��±�Ϊ%d", middle);
			break;
		}
	}
	if (left > right) {
		printf("��������û�и�����");
	}
}