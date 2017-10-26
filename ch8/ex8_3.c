#include <stdio.h>

void ex8_3()
{
	int a = 100;
	int *p   = &a;    //int *p = a;   *p  指標變數的值應是一位址
	int **pp = &p;    //int **pp = p; *pp 指標變數的值應是一位址
	printf("a=%d, *p=%d, and **pp=%d\n", a, *p, **pp);
	//return 0;
}
