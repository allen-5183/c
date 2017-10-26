#include <stdio.h>
#include <stdlib.h>

void ex3_7(void) {
	int i, j, n = 6;             /* 設定迴圈初值 */
	for (i = 1; i <= n; i++)     /* 外層迴圈決定哪一列要印星號 */
	{
		for (j = 1; j <= i; j++) /* 內層迴圈印出*星號 */
			printf("*");
		printf("\n");
	}

	//system("pause");
	//return 0;
}