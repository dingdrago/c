#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void myTongWeiShuSum() {
	int a = 0;
	int sn;
	int two, three, four, five;
	printf("请输入一个大于0小于10的整数");
	scanf("%d", &a);
	two = 10 * a + a;
	three = 100 * a + two;
	four = 1000 * a + three;
	five = 10000 * a + four;
	sn = a + two + three + four + five;
	printf("Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字:\nresult=%d", sn);
}