#include <stdio.h>
#include <stdlib.h>
int gcd2(int, int);

void ex5_2() {
	int num1, num2;
	printf("輸入二整數:");
	scanf("%d %d", &num1, &num2);
	printf("%d 與 %d 的最大公因數: %d\n", num1, num2, gcd2((num1>num2)? num1,num2 : num2,num1));
	system("PAUSE");
	return 0;
}

int gcd2(int n1, int n2) {
	int n3 = 1;
	while (n3 != 0)
	{
		n3 = n1 % n2;
		n1 = n2;
		n2 = n3;
	}
	return n1;
}