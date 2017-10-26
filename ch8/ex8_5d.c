#include <stdio.h>

void ex8_5d()
{
	int a[] = { 0, 1, 2, 3, 4 };
	int *p[] = { a, a + 1, a + 2, a + 3, a + 4 };
	int **pp = p;
	printf("**pp = %d\n", **pp);
	printf("*(*(pp+2)+2) = %d\n", *(*(pp + 2) + 2));
	//system("PAUSE");
	//return 0;
}
