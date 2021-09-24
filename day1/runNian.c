#include <stdio.h>
//判断1000年-- - 2000年之间的闰年
void runNian() {
	int year = 1000,leap=0,count=0;
	for (year;year <= 2000;year++) {
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
			leap = 1;
			count++;
		}
		if (leap)
		{
			printf("%d\t", year);
			if (count%5==0)
			{
				printf("\n");
			}
		}
		leap = 0;
	}
	
}