#include <stdio.h>
#include <stdlib.h>
void input_4b(void);   /* input( )的原型宣告 */
void output_4b(void);  /* output( )的原型宣告 */

void function_4b()
{
	printf("此程式在測試全域變數\n");
	/* 這裡還無法使用 array[0];
	   區域變數名稱可相同 index  
	*/
	//printf(array[0]);
	input_4b();
	output_4b();
	system("PAUSE");
	return 0;
}

int array[5];  /* 定義全域變數array陣列*/
			   /* 定義input( ) */
void input_4b(void)
{
	int index;/*定義input( )的區域變數*/
	for (index = 0; index < 5; index++)
	{
		printf("請輸入 #%d 整數: ",
			index + 1);
		scanf("%d", &array[index]);
		/* 使用全域變數做輸入 */
	}
}

/* 定義output( )*/
void output_4b(void)
{
	int index;/*定義output( )的區域變數*/
	printf("\n");
	for (index = 0; index < 5; index++)
		/* 使用全域變數做輸出 */
		printf("array[%d] is %d\n", index,	array[index]);
}
