#include <stdio.h>
#include <stdlib.h>
void ex1_output();   //函數原型宣告
void dash0();

void ex1() {
	printf("呼叫 output 函數!!\n");
	dash0();
	ex1_output(); /* 呼叫 output 函數  */
	dash0();
	printf("呼叫結束, over!!\n");
	system("PAUSE");
	return 0;
}

/* output() 函數的定義 */
void ex1_output()
{
	printf("我喜歡 iMac\n");
	printf("我喜歡 iPad\n");
}

void dash0()
{
	int i;
	for (i = 0; i<50; i++)
		printf("-");
	printf("\n");
}