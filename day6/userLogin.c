#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//3?ε?¼?????????˳?????
void myUserLogin() {
	int i = 0;
	char password[20] = {0};
	for (i;i < 3;i++) {
		printf("??????????\n");
		scanf("%s", &password);
		if (strcmp(password, "123456789") == 0) {
			printf("??½?ɹ?");
			break;
		}
		else
		{
			printf("????????");
		}
	}
	if (i == 3) {
		printf("???Ѿ???¼???δ??󣬳??????˳?");
	}

}