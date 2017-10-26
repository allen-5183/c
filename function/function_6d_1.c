#include <stdio.h>
#include <stdlib.h>

int sum();
int i = 100, j = 200;

void function_6d_1()
{
	int total;
	total = sum();
	printf("total=%d\n", total);
	//system("PAUSE");
	//return 0;
}

/* function_6d_2.c */
/* other file of project */
/* ©w¸qsum( ) */
int sum()
{
	extern int i1, j1;
	i1 = 100;
	j1 = 200;
	return (i1 + j1);
}