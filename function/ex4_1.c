#include <stdio.h>
#include <stdlib.h>

int num;
int cube();

void ex4_1() {
	printf("輸入一整數:");
	scanf("%d", &num);
	printf("此整數三次方為:%d\n", cube());
	system("PAUSE");
	return 0;
}

int cube() {
	return num*num*num;
}

