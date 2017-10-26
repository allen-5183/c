#include <stdio.h>
#include <stdlib.h>
void increase();

void function_6a()
{
	/* 測試auto儲存類別的生命週期 */
	int count;
	printf("Testing storage class << auto >>\n");
	/* 使用for迴圈呼叫increase( ) */
	for (count = 1; count <= 5; count++)
	{
		printf("# %d call: ", count);
		increase();
	}
	printf("Testing end!!\n");
	system("PAUSE");
	return 0;
}
/* 定義increase( )，ai儲存類別為auto，輸出累加的結果 */
void increase()
{
	auto int ai = 100;  /* 定義ai為auto儲存類別，初值為100 */
	printf("ai = %d\n", ++ai);
}
