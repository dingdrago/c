#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void init(int array[],int size) {
//	printf("******��ʼ�����鿪ʼ******\n");
//	printf("������%d���������֣��Կո����\n",size);
//	int count = 0;
//	while (count < size) {
//		scanf("%d", &array[count]);
//		count++;
//	}
//	int size2 = sizeof(array) / sizeof(array[0]);
//	printf("%d\n", size2);
//	printf("******��ʼ���������******\n");
//}

void Init(int array[], int sz) {    //ʵ�ֺ���init������ʼ������

	int i = 0;

	for (i = 0; i < sz; i++) {

		array[i] = i + 1;

	}
	for (i = 0; i < sz; i++) {

		printf("%d ", array[i]);

	}
	int size2 = sizeof(array) / sizeof(array[0]);	//��֪��Ϊʲô�����������Ѿ���ʼ��Ϊ10�������ˣ�����������鳤�Ȼ���1
	printf("\n%d\n", size2);
}