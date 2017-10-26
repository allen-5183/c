#include<stdio.h>

void hw8() {
	int a, i, j, k;
	printf("請輸入星星的行數?");
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		printf("\n");
		for (j = a; j>i; j--) {
			printf(" ");
		}
		for (k = 1; k <= i; k++) {
			printf("*");
		}
	}
	printf("\n");
	
	//system("pause");
	//return 0;
}
