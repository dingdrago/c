#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ͬ���鳤�Ƚ���
void arrChange() {
	int arrayA[10] = { 8,3,7,9,1,4,0,2,5,6 };
	int arrayB[10] = { 84,31,74,93,11,46,10,23,57,69 };
	int arrayC[10],i;
	for (i = 0;i < 10;i++) {
		arrayC[i] = arrayA[i];
		arrayA[i] = arrayB[i];
		arrayB[i] = arrayC[i];
	}
	printf("�������A������:\n");
	for (i = 0;i < 10;i++) {
		printf("%d\t", arrayA[i]);
	}
	printf("\n�������B������:\n");
	for (i = 0;i < 10;i++) {
		printf("%d\t", arrayB[i]);
	}
	
}