#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���ַ����� binarySearch
void myBinarySearch() {
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 3;
	int size = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = size - 1;
	while (left<=right) {
		int middle = (left + right) / 2;
		if (arr[middle] > k) {
			right = middle - 1;
		}
		else if (arr[middle] < k) {
			left = middle + 1;
		}
		else if (arr[middle] == k)
		{
			printf("�ҵ�Ҫ�ҵ����ˣ��������е��±�Ϊ%d", middle);
			break;
		}
	}
	if (left > right) {
		printf("��������û����Ҫ�ҵ���");
	}
}