#include <stdio.h>
#include <stdlib.h>

void ex4_1(void) {
	int n, i = 1, sum = 0; /* 設定迴圈初值 */
	do
	{
		printf("Please input the value of n (n>0):");
		scanf("%d", &n);
	} while (n <= 0); /* 當n<=0時重複輸入n的值 */
	do
	{
		sum += i;
		i++;
	} while (i <= n); /* 當i<=n時執行累加的動作 */
	printf("1+2+...+%d=%d\n", n, sum);
	
	//system("pause");
	//return 0;
}