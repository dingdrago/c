#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//rhombus ����
//��ӡ������������������������Ҳ�ͺ�ȷ���м���	������+1��/2
/*��ӡ��Ϊ������
	1.��ӡǰ��Ŀհף�Ҳ���ǿ��ַ���
	2.��ӡ*
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