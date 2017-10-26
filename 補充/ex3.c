#include <stdio.h>

ex3()
{
	int i, j;
	int k = 1;
	printf("請輸入一數字(1 以外)? ");
	scanf("%d", &i);
	for (j = 2; j<i; j++)
	{
		if (i%j == 0)
		{
			k = 0;
			break;
		}
	}
	if ((i>1) && k == 1)
	{
		printf("質數\n");
	}
	else
	{
		printf("非質數\n");
	}
}