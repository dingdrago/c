#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu() {
	printf("********************************************\n");
	printf("**********1.��ʼ��Ϸ	0.��Ϸ����**********\n");
	printf("********************************************\n");

}
void playGrame() {
	char board[ROW][COL];
	//��ʼ������
	initBoard(board,ROW,COL);
	//��ӡ����
	displayBoard(board, ROW, COL);
	//����
	char ret=' ';
	while (1) {
		//�������
		playerMove(board,ROW,COL);
		displayBoard(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		
		//��������
		conputerMove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		printf("������������\n");
		ret = isWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}

	}
	if (ret == '*') {
		printf("���Ӯ\n");
	}
	else if (ret == '#') {
		printf("����Ӯ\n");
	}
	else if(ret=='Q')
	{
		printf("ƽ��\n");
	}

}
void test() {
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			playGrame();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��ѡ��Ĳ��Ϸ�\n");
			break;
		}
	} while (input);
}
int main() {
	test();
	/*hello();*/
	return 0;
}