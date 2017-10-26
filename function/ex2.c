#include <stdio.h>
#include <stdlib.h>

void calculate();

void ex2() {
	calculate();
	system("PAUSE");
	return 0;
}


/* calculate() 函數的定義 */
void calculate()
{
	int num;
	printf("請輸入分數:");
	scanf("%d", &num);
	if (num >= 60)
		printf("pass\n");
	else
		printf("down\n");
}


void dash()
{
	int i;
	for (i = 0; i<50; i++)
		printf('-');
	printf("\n");
}