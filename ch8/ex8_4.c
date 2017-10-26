#include <stdio.h>

void ex8_4()
{
	double d;
	double *p = &d;    
	double **pp = &p;      // 原: double **pp = p;
	printf("請輸入一double數: ");
	scanf("%lf", &d);       // 原: scanf("%f", d);
	printf("a=%.2f, *p=%.2f, and **pp=%.2f\n", d, *p, **pp);  // 原: printf("a=%d, *p=%d, and **pp=%d\n", d, *p, **pp);
	//system("PAUSE");
	//return 0;
}
