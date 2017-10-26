#include <stdio.h>
#include <stdlib.h>

void hw4(void)
{
	int num = 5, sum = 0;

	while (num <= 20)
	{
		printf("%d*%d=%d\n", num, num, num*num);
		sum += num*num;
		num++;
	}
	printf("sum=%d\n", sum);

	//system("pause");
	//return 0;
}
