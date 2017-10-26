#include <stdio.h>
#include <stdlib.h>

void hw4(void) {
	int i;
	int total = 0;
	for (i = 1; i <= 10; i++)
	{
		total = total + i*i;
	}
	printf("total is: %d", total);
	
	//system("pause");
	//return 0;
}

