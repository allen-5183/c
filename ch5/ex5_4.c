#include <stdio.h>
#include <stdlib.h>

void star(void);               /* star()函數的原型 */

void ex5_4(void) {
	star();                    /* 呼叫star函數 */
	printf(" Welcome to the C language \n");
	star();                    /* 呼叫star函數 */
	
	//system("pause");
	//return 0;
}

void star(void)
{
	printf("*************\n"); /* 印出13個星號 */
	return;
}