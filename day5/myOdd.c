#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//判断输入的数是否为奇数
void oddFirst() {
	int a;
again:
	printf("请输入一个整数，以便来判断它是否为奇数\n");
	scanf("%d", &a);
	if (a % 2 != 0) {
		printf("恭喜你答对了，%d为奇数\n", a);
	}
	else
	{
		printf("%d不是奇数\n", a);
		goto again;
	}
}