#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void receiveNumber() {
	printf("??????һ???ַ?\n");
	int input,count=1;
	while ((input = getchar())!=EOF)
	{
		if (count!=1) {
		printf("??????һ???ַ?\n");
		}
		if (input >= 'a' && input <= 'z') {
			printf("%c\n", input - 32);
		}
		else if (input >= 'A' && input <= 'Z')
		{
			printf("%c\n", input + 32);
		}
		else if (input >= '0' && input <= '9') {
		}
		count++;
	}

}