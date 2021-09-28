#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
extern void playGame();
extern void menu();
void guessGameMy() {
	srand((unsigned int)time(NULL));
	menu();
}
//猜数字游戏菜单
void menu() {
	int option = 0;
	printf("**********************************************\n");
	printf("*******请选择:1.再玩一局 0.结束游戏***********\n");
	printf("**********************************************\n");
	scanf("%d", &option);
	switch (option)
	{
	case 1:
		playGame();
		break;
	case 0:
		printf("游戏即将结束");
		break;
	default:
		printf("输入不正确");
		break;
	}
}
//猜数字逻辑
void playGame() {
	
	int number=0;
	int round = rand()%100;
	//printf("%d\n", round);
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &number);
		if (number > round) {
			printf("你猜大啦！！！\n\n");
		}
		else if (number < round) {
			printf("你猜小啦！！！\n\n");
		}
		else if(number==round)
		{
			printf("恭喜你猜对啦！！！\n\n");
			break;
		}
	}
	menu();
}