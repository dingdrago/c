#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//������ȫ����ʼ��Ϊ�ո�
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
//��ʾ����(�̶��ģ�ֻ��ʾ�̶�����)
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

//��̬��ʾ���̣������Զ�����ж���
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

//�������
void playerMove(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	do
	{
		printf("���������꣬�Ա�����");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��λ���Ѿ����¹���");
			}
		}
		else
		{
			printf("��������겻�Ϸ�\n");
		}
	} while (1);

}

//��������
void conputerMove(char board[ROW][COL], int row, int col) {
	do
	{
		printf("�����������꣬�Ա�����\n");
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

//�ж���Ӯ
/*
1.*�������Ӯ
2.#��������Ӯ
3.Q�����;�
4.C������Ϸ����
*/

char isWin(char board[ROW][COL], int row, int col) {
	int i = 0;
	//�ж������Ƿ�Ϊͬһ������
	for (i = 0;i < row;i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
			return board[i][1];
		}
	}
	//�ж������Ƿ�Ϊͬһ������
	for (i = 0;i < col;i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') {
			return  board[1][i];
		}
	}
	//�ж϶Խ����Ƿ�Ϊͬһ������
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
		return  board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return  board[1][1];
	}

	//�ж�ƽ��
	//����������˷���1����������0
	int ret = isFull(board,row,col);
	if (ret == 1) {
		return 'Q';
	}
	//����
	return 'C';
}