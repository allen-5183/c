#include <stdio.h>
#include <stdlib.h>
double Area(void);

void ex2_1() {
	double area;
	area = Area();
	printf("長方形的面積為 %.2f\n", area);
	system("PAUSE");
	return 0;
}

double Area(void)
{
	double num1, num2;
	printf("請輸入長方形的長與寬: ");
	scanf("%lf %lf", &num1, &num2);
	return (num1*num2);
}