#include <stdio.h>
#include <stdlib.h>

void hw3(void) {
	int i;
	int total = 0;
	for (i = 1; i <= 99; i = i + 2)
	{
		total = total + i;
	}
	printf("total is: %d\n", total);
	
	//system("pause");
	//return 0;
}
