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
//��������Ϸ�˵�
void menu() {
	int option = 0;
	printf("**********************************************\n");
	printf("*******��ѡ��:1.����һ�� 0.������Ϸ***********\n");
	printf("**********************************************\n");
	scanf("%d", &option);
	switch (option)
	{
	case 1:
		playGame();
		break;
	case 0:
		printf("��Ϸ��������");
		break;
	default:
		printf("���벻��ȷ");
		break;
	}
}
//�������߼�
void playGame() {
	
	int number=0;
	int round = rand()%100;
	//printf("%d\n", round);
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &number);
		if (number > round) {
			printf("��´���������\n\n");
		}
		else if (number < round) {
			printf("���С��������\n\n");
		}
		else if(number==round)
		{
			printf("��ϲ��¶���������\n\n");
			break;
		}
	}
	menu();
}