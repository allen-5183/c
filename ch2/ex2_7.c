#include <stdio.h>
#include <stdlib.h>

void ex2_7(void)
{
	int num;
	printf("Please input an integer: ");
	scanf("%d", &num);
	if (num >= 0)
		if (num <= 10)
			printf("number between 0-10 \n");
		else
			printf("number greater than 10 \n");
	
	//system("pause");
	//return 0;
}