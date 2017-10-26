#include <stdio.h>
#include <stdlib.h>

void ex8_8b()
{
	//char   a[13][3] = {"ab", "cd", "ef", "gh", "ij", "kl", "mn", "op", "qr", "st", "uv", "wx", "yz"};
	char   a[][3] = { "ab", "cd", "ef", "gh", "ij", "kl", "mn", "op", "qr", "st", "uv", "wx", "yz" };
	
	char (*str)[13] = a;

	printf("     *str=%p\n", *str);
	printf("    **str=%c\n", **str);

	printf(" *(str+2)=%p\n", *(str + 2));
	printf("**(str+2)=%c\n", **(str + 2));

	printf("   *str+2=%p\n", *str + 2);
	printf("**(str+2)=%c\n", *(*str + 2));

	printf("    *(str+3)+2 =%p\n", *(str + 3) + 2);
	printf(" *(*(str+3)+2) =%c\n", *(*(str + 3) + 2));

	printf(" *(*(str+1)+2) =%c\n", *(*(str + 1) + 2));

	//system("PAUSE");
	//return 0;
}