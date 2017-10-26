#include <stdio.h>
#include <stdlib.h>
void ex3_5(void)
{
	int i = 1, sum = 0; /* ³]©w°j°éªì­È */
	while (i <= 99999999)
	{
		sum += i;
		printf(" From 1 to accumulate %2d=%2d\n", i, sum);
		i++;
	}
	
	//system("pause");
	//return 0;
}