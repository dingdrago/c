#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void init(int array[],int size) {
//	printf("******初始化数组开始******\n");
//	printf("请输入%d个整型数字，以空格相隔\n",size);
//	int count = 0;
//	while (count < size) {
//		scanf("%d", &array[count]);
//		count++;
//	}
//	int size2 = sizeof(array) / sizeof(array[0]);
//	printf("%d\n", size2);
//	printf("******初始化数组结束******\n");
//}

void Init(int array[], int sz) {    //实现函数init（）初始化数组

	int i = 0;

	for (i = 0; i < sz; i++) {

		array[i] = i + 1;

	}
	for (i = 0; i < sz; i++) {

		printf("%d ", array[i]);

	}
	int size2 = sizeof(array) / sizeof(array[0]);	//不知道为什么，上面数组已经初始化为10个容量了，算出来的数组长度还是1
	printf("\n%d\n", size2);
}
