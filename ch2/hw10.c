#include<stdio.h>

void hw10() {
	int a, i, j, k, m, n;
	printf("請輸入星星的行數: ");
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		printf("\n");
		for (j = a; j>i; j--) {
			printf(" ");
		}
		for (k = 1; k <= i; k++) {
			printf("*");
		}
		for (m = 2; m <= i; m++) {
			printf("*");
		}
		for (n = a; n>i; n--) {
			printf(" ");
		}
	}
	printf("\n");
	
	//system("pause");
	//return 0;
}
