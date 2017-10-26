#include <stdio.h>
#include <stdlib.h>
void printstar(int);  /* printfstar()的原型宣告 */

void function_3b()
{
	int num;
	printf("你要多少星星: ");
	scanf("%d", &num);
	printstar(num);
	system("PAUSE");
	return 0;
}

void printstar(int n)
{
	int i;
	for (i = 1; i<n; i++)
		printf("*");
	printf("\n");
}
