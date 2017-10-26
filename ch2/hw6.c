#include <stdio.h>
#include <stdlib.h>

void hw6(void)
{
	int i, j, input;                   /* 設定迴圈出值 */
	printf("請輸入星星的行數?");
	scanf("%d", &input);
	for (i = 1; i <= input; i++)       /* 外層迴圈決定哪一列要印星號 */
	{
		for (j = 1; j <= i; j++)        /* 內層迴圈印出*星號 */
			printf("*");
		printf("\n");
	}

	//system("pause");
	//return 0;
}
