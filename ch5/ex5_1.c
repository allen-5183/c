#include <stdio.h>
#include <stdlib.h>

void ex5_1(void)
{
	int i, j, sale[2][4], sum = 0;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
		{
			printf("sales%d %d quarter results:", i + 1, j + 1);
			scanf("%d", &sale[i][j]); /* 輸入銷售量 */
		}
	printf("***Output***");
	for (i = 0; i<2; i++) /* 輸出銷售量並計算總銷售量 */
	{
		printf("\nsales%d quarter results:", i + 1);
		for (j = 0; j<4; j++)
		{
			printf("%d ", sale[i][j]);
			sum += sale[i][j];
		}
	}
	printf("\n2015 results for the total sales volume of %d cars \n", sum);
	
	//system("pause");
	//return 0;
}
