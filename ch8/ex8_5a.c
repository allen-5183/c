#include <stdio.h>
#include <stdlib.h>

void ex8_5a(void)
{
	int i;
	char str[4][20] = { "Department", "of", "Information", "Management" };
	for (i = 0; i<4; i++) {
		printf("str + %d = %p\n", i, str + i);
		printf("*(str + %d) = %p\n", i, *(str + i));
		printf("str [%d] = %p\n\n", i, str[i]);
	}
	//system("PAUSE");
	//return 0;
}