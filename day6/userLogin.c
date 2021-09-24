#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//3次登录错误后则退出程序
void myUserLogin() {
	int i = 0;
	char password[20] = {0};
	for (i;i < 3;i++) {
		printf("请输入密码\n");
		scanf("%s", &password);
		if (strcmp(password, "123456789") == 0) {
			printf("登陆成功");
			break;
		}
		else
		{
			printf("密码错误");
		}
	}
	if (i == 3) {
		printf("您已经登录三次错误，程序将退出");
	}

}