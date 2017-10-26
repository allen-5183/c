#include <stdio.h>
#include <stdlib.h>
void hw2(void)
{
	float f, c;

	printf("請輸入攝氏溫度:");
	scanf("%f", &c);

	f = (9 / 5.0)*c + 32;

	printf("攝氏%.2f度=華氏%.2f度\n", c, f);

	//system("pause");
	//return 0;
}
