#include <stdio.h>
#include <stdlib.h>

void hw7(void)
{
	int i, j, input;                   /* 設定迴圈出值 */
	printf("請輸入星星的行數?");
	scanf("%d", &input);
	for (i = input; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	//system("pause");
	//return 0;
}
