#include <stdio.h>
#include <stdlib.h>
int number;            /* number是一個全域變數 */
void output_4a(void);  /* output_4a( )的原型宣告 */

void function_4a()
{
	printf("Please enter a number : ");
	scanf("%d", &number);
	output_4a();
	system("PAUSE");
	return 0;
}

/* 定義output_4a( ) */
void output_4a(void)
{
	printf("Number is %d\n",  number);
}
