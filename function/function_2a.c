#include <stdio.h>
#include <stdlib.h>

int square();  /* square( )的原型宣告 */

void function_2a()
{
	int ans;
	printf("計算某一整數的平方\n\n");
	ans = square();   /* 用ans接收square()的傳回值 */
	printf("它的平方是 %d\n", ans);
	system("PAUSE");
	return 0;
}

/* 定義square()，函數型態為int */
/* 要求輸入一數，並將此數平方後傳回 */
int square()
{
	int num, total;
	printf("請輸入一整數: ");
	scanf("%d", &num);
	total = num*num;
	return  total; /* 將total傳回呼叫函數 */
}
