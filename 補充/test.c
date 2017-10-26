#include <stdio.h>
#include <stdlib.h>

void test() {
	int a;
	char c;
	scanf("%d", &a);
	fflush(stdin);
	c = getchar();
	printf("a = %d, c = %c \n", a, c);
	//return 0;
	
}
