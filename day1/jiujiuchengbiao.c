#include <stdio.h>
//输出乘法口诀表
void chengFaBiao() {
	int j, i,ji;
	for (i = 1;i <= 9;i++) {
		for (j = 1;j <= i;j++) {
			ji = i * j;
			printf("%d*%d=%d\t",i,j,ji);
		}
		printf("\n");
	}
}