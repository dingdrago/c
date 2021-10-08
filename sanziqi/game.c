#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//将数组全部初始化为空格
void initBoard(char board[ROW][COL], int row, int col) {
	int i = 0,j=0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//显示棋盘(固定的，只显示固定列数)
//void displayBoard(char board[ROW][COL], int row, int col) {
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1) {
//			printf("---|---|---\n");
//		}
//	}
//}
//void hello() {
//	printf("hello");
//}

//动态显示棋盘，可以自定义多列多行
void displayBoard(char board[ROW][COL], int row, int col) {
	int i = 0,j=0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

//玩家下棋
void playerMove(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	do
	{
		printf("请输入坐标，以便下棋");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已经被下过了");
			}
		}
		else
		{
			printf("输入的坐标不合法\n");
		}
	} while (1);

}

//电脑下棋
void conputerMove(char board[ROW][COL], int row, int col) {
	do
	{
		printf("电脑输入坐标，以便下棋\n");
		int x = rand() % row;
		int y= rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	} while (1);
}

int isFull(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

//判断输赢
/*
1.*代表玩家赢
2.#代表电脑赢
3.Q代表和局
4.C代表游戏继续
*/

char isWin(char board[ROW][COL], int row, int col) {
	int i = 0;
	//判断三行是否为同一个符号
	for (i = 0;i < row;i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
			return board[i][1];
		}
	}
	//判断三列是否为同一个符号
	for (i = 0;i < col;i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') {
			return  board[1][i];
		}
	}
	//判断对角线是否为同一个符号
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
		return  board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return  board[1][1];
	}

	//判断平局
	//如果棋盘满了返回1，不满返回0
	int ret = isFull(board,row,col);
	if (ret == 1) {
		return 'Q';
	}
	//继续
	return 'C';
}