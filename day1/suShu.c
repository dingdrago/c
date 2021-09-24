#include <stdio.h>
//打印100~200之间的素数
void suShu() {
	int yaunShu;
	int leap = 1, count = 0, j;
	for (yaunShu = 100;yaunShu <= 200;yaunShu++) {
		for (j = 2;j < yaunShu / 2;j++) {
			if (yaunShu % j == 0)
				leap = 0;
			break;
		}
		if (leap)
		{
			printf("%d\t", yaunShu);
			count++;
			if (count % 4 == 0) {
				printf("\n");
			}
		}
		leap = 1;

	}
}