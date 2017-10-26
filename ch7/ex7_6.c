#include <stdio.h>
#include <stdlib.h>
void add10(int *); /* add10()函數的原型 */

void ex7_6(void) {
	int a = 5;
	printf("Before call add10(),a=%d\n", a);
	add10(&a); /* 呼叫add10()函數 */
	printf("After call add10(),a=%d\n", a);
	system("pause");
	return 0;
}
void add10(int *p1)
{
	*p1 = *p1 + 10;
}