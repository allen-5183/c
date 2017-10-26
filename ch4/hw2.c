#include <stdio.h>
#include <stdlib.h>

void hw2(void)
{
	int n, i = 2, sum = 0;
	do
	{
		printf("請輸入n值(n>0，且為偶數): ");
		scanf("%d", &n);
	} while (n <= 0 || n % 2 == 1);

	do
	{
		sum += i;
		i += 2;
	} while (i <= n);
	printf("2+4+...+%d=%d\n", n, sum);

	//system("pause");
	//return 0;
}
