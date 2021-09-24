#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void fenHe() {
	int i, sigin = 1, a = 1;
	float xiangChu;
	float sum = 0;
	for (i = 0;i < 100;i++) {
		xiangChu= 1.0/a;
		sum =sum+(sigin*xiangChu);
		sigin = -sigin;
		a++;
	}
	printf("相加后的值为:%f", sum);
}