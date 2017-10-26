#include <stdio.h>
#include <stdlib.h>
void browser();

void ex6_1() {
	int pass;
	for (;;) {
		printf("請輸入密碼: ");
		scanf("%d", &pass);
		if (pass == -9999)
			break;
		else
			browser();
	}
	system("PAUSE");
	return 0;
}

void browser() {
	static counter = 0;
	counter++;
	printf("目前瀏覽網頁人數有 %d", counter);
	printf("\n\n");
}