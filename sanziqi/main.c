#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu() {
	printf("********************************************\n");
	printf("**********1.开始游戏	0.游戏结束**********\n");
	printf("********************************************\n");

}
void playGrame() {
	char board[ROW][COL];
	//初始化棋盘
	initBoard(board,ROW,COL);
	//打印棋盘
	displayBoard(board, ROW, COL);
	//下棋
	char ret=' ';
	while (1) {
		//玩家下棋
		playerMove(board,ROW,COL);
		displayBoard(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		
		//电脑下棋
		conputerMove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		printf("电脑已下玩棋\n");
		ret = isWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}

	}
	if (ret == '*') {
		printf("玩家赢\n");
	}
	else if (ret == '#') {
		printf("电脑赢\n");
	}
	else if(ret=='Q')
	{
		printf("平局\n");
	}

}
void test() {
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			playGrame();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("您选择的不合法\n");
			break;
		}
	} while (input);
}
int main() {
	test();
	/*hello();*/
	return 0;
}