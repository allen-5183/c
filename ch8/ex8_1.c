#include <stdio.h>
#include <stdlib.h>

void ex8_1() {
	int x = 100;
	int *p1 = &x;

	/*int **p2;
	p2 = &p1;
	*/

	int **p2 = &p1;
	printf("x 變數的位址: %p, 它的值 %d\n", &x, x);
	printf("p1 指標變數的位址: %p,它存放的位址 %p\n", &p1, p1);
	printf("p2 指標變數的位址: %p,它存放的位址 %p\n", &p2, p2);
	printf("p1 指標變數的值: %d, p2 指標變數的值 %d\n", *p1, **p2);
	printf("p1佔%dbytes\, p2佔%dbytes\n", sizeof(p1), sizeof(p2));
	//system("pause");
	//return 0;
}
