#include <stdio.h>
#include <stdlib.h>

void ex3_8(void)
{
	int a, r;
	while (1)
	{
		do
		{
		   printf("Input an integer:");
		   scanf("%d", &a);
		} while (a <= 0);            /* 必須輸入大於0的正整數 */
		
		printf("The reverse is ");
		
		while (a != 0)               /* 將正整數倒過來輸出 */
		{
			r = a % 10;              /* 計算a/10的餘數 */
			a /= 10;                 /* 計算a/10，再把結果設回給a */
			printf("%d", r);
		}
		printf("\n\n");
	}
	
	//system("pause");
	//return 0;
}