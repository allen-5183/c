#include <stdio.h>
#include <stdlib.h>

void function_1a(void);  /* 函數原型宣告 */

void function_1a()
{
	printf("呼叫output函數!!\n");
	output();     /* 呼叫output( )函數 */
	printf("呼叫結束，over!!\n");
	system("PAUSE");
	//return 0;
}

/* output( )函數的定義 */
output(void)
{
	printf("我喜歡iPhone 6s\n");
	printf("也喜歡Apple watch\n");
}
