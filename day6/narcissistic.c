#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//Narcissistic	number ˮ�ɻ���
//0-999��ˮ�ɻ���
void myNarcissistic() {
	int hunderdDigit;//��λ��
	int doubleDigit;//ʮλ��
	int singleDigit=3;//��λ��
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