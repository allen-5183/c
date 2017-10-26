#include <stdio.h>
#include <stdlib.h>

void ex1_5(void)
{
	short sum, s = 32767; /* 宣告短整數變數sum與s */
	sum = s + 1;
	printf("s+1= %d\n", sum); /* 列印出sum的值*/
	sum = s + 2;
	printf("s+2= %d\n", sum); /* 列印出sum的值*/
	//system("pause");
	//return 0;
}