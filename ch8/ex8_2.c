#include <stdio.h>
#include <stdlib.h>

void ex8_2() {
	int x = 100;
	int *p1 = &x;

	/*int **p2;
	p2 = &p1;
	*/

	int **p2 = &p1;
	int ***p3 = &p2;

	printf("x 變數的位址: %p, 它的值 %d\n", &x, x);
	printf("p1 指標變數的位址: %p,它存放的位址 %p\n", &p1, p1);
	printf("p2 指標變數的位址: %p,它存放的位址 %p\n", &p2, p2);
	printf("p3 指標變數的位址: %p,它存放的位址 %p\n", &p3, p3);

	printf("p1 指標變數的值: %d, p2 指標變數的值 %d, p3 指標變數的值 %d\n", *p1, **p2, ***p3);
	printf("p1佔%dbytes\, p2佔%dbytes, p3佔%dbytes\n", sizeof(p1), sizeof(p2), sizeof(p3));
	//system("pause");
	//return 0;
}
