#include <stdio.h>
#include <stdlib.h>

void hw1(void)
{
	int num;
	printf("請輸入一個整數:");
	scanf("%d", &num);
	if (num % 2 == 0)
		printf("%d是偶數\n", num);
	if (num % 2 == 1)
		printf("%d是奇數\n", num);
	
	//system("pause");
	//return 0;
}
