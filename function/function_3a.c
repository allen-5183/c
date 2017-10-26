#include <stdio.h>
#include <stdlib.h>

int square1(int);  /* square( )的原型宣告 */

void function_3a()
{
	int num, ans;
	printf("計算某一整數的平方\n\n");
	printf("請輸入一整數: ");
	scanf("%d", &num);
	ans = square1(num);  /* 用ans接收square()的傳回值 */
	printf("%d 的平方是 %d\n", num, ans);
	system("PAUSE");
	return 0;
}
/* 定義square()，函數型態為int */
/* 要求輸入一數，並將此數平方後傳回 */
int square1(n)
{
	int total;
	total = n*n;
	return  total; /* 將total傳回呼叫函數 */
}
