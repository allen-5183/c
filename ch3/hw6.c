#include <stdio.h>
#include <stdlib.h>

void hw6(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)		/* ¥~¼h°j°é */
	{
		for (j = 1; j <= 9; j++)	/* ¤º¼h°j°é */
			printf("%d*%d=%2d  ", i, j, i*j);
		printf("\n");
	}

	//system("pause");
	//return 0;
}
