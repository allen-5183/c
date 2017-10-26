#include <stdio.h>
#include <stdlib.h>

void ex7_2(void)
{
	int *ptr, num = 20;
	ptr = &num;                              /* 將num的位址設給指標ptr存放 */
	printf("num=%d, &num=%p\n", num, &num);
	printf("*ptr=%d, ptr=%p, &ptr=%p\n", *ptr, ptr, &ptr);    
	//system("pause");
	//return 0;
}