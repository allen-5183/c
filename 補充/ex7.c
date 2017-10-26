#include<stdlib.h> 

void ex7()
{
	long x = 1;
	int i = 1;
	for (i = 1; i <= 10; i++)
	{
		x = x*i;
	}
	printf("%ld\n", x);
	system("pause");
	return 0;
}