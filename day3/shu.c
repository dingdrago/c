#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void shuZhongShu() {
	int i,count=0;
	for (i =1;i <= 100;i++) {
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 == 9) {
			count++;
		}
	}
	printf("1-100中出现9的次数为：%d", count);