#include <stdio.h>
#include <stdlib.h>

void swap(int, int); /* swap()函數的原型 */

void ex7_7(void) {
	int a = 5, b = 20;
	printf("Before swap...");
	printf("a=%d,b=%d\n", a, b);

	//printf("%p\n", &a);
	//printf("%p\n", &b);
	swap(a, b);
	printf("After swap...");
	printf("a=%d,b=%d\n", a, b);
	//system("pause");
	return 0;
}

void swap(int x, int y) /* 定義swap()函數 */
{
	//printf("%p\n", &x);
	//printf("%p\n", &y);
	//printf("%d\n", x);
	//printf("%d\n", y);

	int tmp = x;
	x = y;
	y = tmp;
}