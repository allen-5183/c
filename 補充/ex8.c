#include <stdio.h>
#include <stdlib.h>

void ex8()
{
	int i, j, n;
	printf("請輸入一數字? ");
	scanf("%d", &n);
	if (n % 2 == 1)
	{
		for (i = 0; i <= n; i += 2)
		{
			for (j = 0; j <= (n - i) / 2; j++)
				printf(" ");
			for (j = 0; j <= i; j++)
				printf("*");
			printf("\n");
		}
	}
	else printf("please keyin right number\n");

	//system("PAUSE");
	//return EXIT_SUCCESS;
}