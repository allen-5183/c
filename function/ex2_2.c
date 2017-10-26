#include <stdio.h>
#include <stdlib.h>
double Abs(void);

void ex2_2() {
	double num;
	num = Abs();
	printf("其數值之絕對值為 %f\n", num);
	system("PAUSE");
	return 0;
}

double Abs(void)
{
	double num;
	printf("請輸入一數值: ");
	scanf("%lf", &num);
	return (num >0) ? num : -num;
}