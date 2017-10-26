#include <stdio.h>
#include <stdlib.h>
void increase_6b();

void function_6b()
{
	/* 測試static儲存類別的生命週期 */
	int count;
	printf("Testing storage class << static >>\n");
	/* 使用for迴圈呼叫increase( ) */
	for (count = 1; count <= 5; count++)
	{
		printf("#%d call: ", count);
		increase_6b();
	}
	printf("Testing end!!\n");
	system("PAUSE");
	return 0;
}
/* 定義increase( )函數，si儲存類別為static，輸出累加的結果 */
void increase_6b(void)
{
	static int si = 100; /* 定義si為static儲存類別，初值為100 */
	printf("si = %d\n", ++si);
}
