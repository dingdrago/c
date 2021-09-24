#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//Narcissistic	number 水仙花数
//0-999间水仙花数
void myNarcissistic() {
	int hunderdDigit;//百位数
	int doubleDigit;//十位数
	int singleDigit=3;//个位数
	int i,sum,count=0;
	for (i =100;i <= 999;i++) {
		singleDigit = i % 10;
		doubleDigit = i/10 % 10;
		hunderdDigit = i/100 % 10;
		sum = pow(singleDigit, 3)+ pow(doubleDigit, 3)+ pow(hunderdDigit, 3);
		if (sum == i) {
			printf("%d\t", sum);
			count++;
			if (count % 5 == 0) {
				printf("\n");
			}
		}
	}
	//int sum, singleDigit = 3;
	
		
}	
