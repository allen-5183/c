#include <stdio.h>
#include <stdlib.h>

void function_6c()
{
	/* 測試register儲存類別 */
	int count1, count2;
	register long num = 0;  /* 定義num為register儲存類別 */
	printf("Testing storage class << register >>\n");
	/* 巢狀迴圈對num作累加的動作 */
	printf("Number: \n");
	for (count1 = 1; count1 <= 500; count1++)
		for (count2 = 1; count2 <= 500; count2++)
			printf("\r%d", ++num);
	printf("\nTesting end!!\n");
	system("PAUSE");
	return 0;
}
