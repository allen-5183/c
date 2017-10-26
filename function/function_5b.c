#include <stdio.h> 
#include <stdlib.h> 
int factorial_5b(int);

void function_5b()
{
	int num;
	printf("Please input a number: ");
	scanf("%d", &num);
	printf("Factorial(%d)=%d\n", num, factorial_5b(num));
	system("PAUSE");
	return 0;
}

int factorial_5b(int n)
{
	int k, total = 1;
	for (k = 1; k <= n; k++)
		total *= k;
	return total;
}
