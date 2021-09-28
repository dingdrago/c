#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int FeiFunction(int n) {
	int a = 1, b = 1,c=1;
	while (n>2)
	{
			c = a + b;
			a = b;
			b = c;
			n--;
	}
		return c;
	/*if (n <= 2) {
		return 1;
	}
	else if(n>2)
	{*/

		/*return FeiFunction(n - 1) + FeiFunction(n - 2);*/	//这种递归方法用在这里效率低
	//}
}