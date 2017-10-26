#include <stdio.h>
#include <stdlib.h>


void ex3_1(void)
{
	int a = 3, b = 3;
	printf("a=%d", a);
	printf(", a++ return value%d", a++); /* 計算a++，並印出其傳回值 */
	printf(", a=%d\n", a);
	printf("b=%d", b);
	printf(", ++b return value%d",++b); /* 計算++b，並印出其傳回值 */
    printf(", b=%d\n", b);
	
	//system("pause");
	//return 0;
}