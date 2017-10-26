#include <stdio.h>
#include <stdlib.h>

void ex2_10(void)
{
	int i = 1, sum = 0; /* 設定迴圈初值 */
	while (i <= 100) /* while迴圈，當sum小於100則繼續累加 */
	{
		sum += i;
		printf(" From 1 to accumulate %2d=%2d\n", i, sum);
		i++;
	}
	printf(" It must be added to the %d\n", i - 1);
	
	//system("pause");
	//return 0;
}