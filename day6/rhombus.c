#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//rhombus 菱形
//打印这种正菱形列数都是奇数，也就好确定中间列	（列数+1）/2
/*打印分为两部分
	1.打印前面的空白，也就是空字符串
	2.打印*
*/
void myRhombus() {
	int i = 1,j;
	int star;
	char spaceSingle;
	for (i;i <= 13;i++) {
		if (i <= 7) {
			star = 2 * i - 1;
			spaceSingle = (13 - star) / 2;
			for (j = 1;j <= spaceSingle;j++) {
				printf(" ");
			}
			for (j = 1;j <= star;j++) {
				printf("*");
			}
			printf("\n");
		}
		else
		{
			star = star - 2;
			spaceSingle = spaceSingle + 1;
			for (j = 1;j <= spaceSingle;j++) {
				printf(" ");
			}
			for (j = 1;j <= star;j++) {
				printf("*");
			}
			printf("\n");
		}
	}
}