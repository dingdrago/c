#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//?ж?1-100????????
void panDuanOdd() {
	int i,count=0;
	for (i = 1;i <= 100;i++) {
		if (i%2!=0)
		{
			printf("%d\t", i);
			count++;
		}
		if (count % 5 == 0) {
			printf("\n");
		}
	}
}
