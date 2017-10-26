#include <stdio.h>
#include <stdlib.h>

void hw5(void)
{
	int n = 1, sum = 0;

	while (sum<1000)
		sum += n++;

	printf("n=%d, sum=%d\n", n, sum);

	//system("pause");
	//return 0;
}
