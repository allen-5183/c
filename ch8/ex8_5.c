#include <stdio.h>
#include <stdlib.h>

void ex8_5() {
	char x = 'c';
	char *p1 = &x;

	/*int **p2;
	p2 = &p1;
	*/

	char **p2 = &p1;
	printf("x 變數的位址: %p,      它的值 %c\n", &x, x);
	printf("p1 指標變數的位址: %p, 它存放的位址 %p\n", &p1, p1);
	printf("p2 指標變數的位址: %p, 它存放的位址 %p\n", &p2, p2);
	printf("p1 指標變數的值:   %c, p2 指標變數的值 %c\n", *p1, **p2);
	printf("p1佔%dbytes\, p2佔%dbytes\n", sizeof(p1), sizeof(p2));
	//system("pause");
	//return 0;
}
