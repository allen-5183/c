#include <stdio.h>
#include <stdlib.h>
int input();

void ex4_2() {
	int data;
	data = input();
	printf("輸入一整數:");
	printf("此整數為:%d\n", data);
	system("PAUSE");
	return 0;
}

int input() {
	int num;
	printf("輸入一整數");
	scanf("%d", &num);
	return num;
}