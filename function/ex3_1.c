#include <stdio.h>
#include <stdlib.h>

double cubeAdd(double, double, double);
double printstar3(int);
int ex3_1() {
	double num1, num2, num3, sum;
	int star;
	printf("此程式在計算三浮點數的立方和\n\n");
	printf("請輸入三個浮點數: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	/* 傳遞兩個變數 num1, num2 到 cubeAdd() 函數 */
	/* 使用變數 sum 接收函數傳回值  */
	sum = cubeAdd(num1, num2, num3);
	printf("請問要多少個*: ");
	scanf("%d", &star);
	printstar3(star);
	printf("%f 的立方加 %f 的立方加 %f 立方為 %f\n", num1, num2, num3, sum);
	printstar3(star);
	system("PAUSE");
	return 0;
}

/* 定義 cubeAdd(), 函數型態為 int, 參數為 a,b 與 c */
/* 計算 a,b,c 的立方和回傳 */
double cubeAdd(double a, double b, double c)
{
	double ans;
	ans = a * a * a + b * b * b + c * c * c;
	return ans;
}

double printstar3(int n)
{
	int i;
	for (i = 1; i <= n; i++)
		printf("*");
	printf("\n");
}