#include <stdio.h>
#include <stdlib.h>
void swap1(int *, int *); /* 函數swap()原型的宣告 */

void ex7_8(void) {
	int a = 5, b = 20;
	printf("Before swap...");
	printf("a=%d,b=%d\n", a, b);
	//printf("%p\n", &a);
	//printf("%p\n", &b);

	swap1(&a, &b);
	printf("After swap...");
	printf("a=%d,b=%d\n", a, b);
	//system("pause");
	//return 0;
}
void swap1(int *p1, int *p2)
{
	//printf("%p\n", &p1);
	//printf("%p\n", &p2);
	//printf("%p\n", p1);
	//printf("%p\n", p2);
	//printf("%d\n", *p1);
	//printf("%d\n", *p2);


	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}