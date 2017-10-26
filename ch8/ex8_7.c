#include <stdio.h>
#include <stdlib.h>

void ex8_7()
{
	//char *str[4] = { "Department", "of", "Information", "Management" };
	char *str[4] = { "abc", "def", "ghi", "jkl" };
	
	printf("     *str=%p\n", *str);
	printf("    **str=%c\n", **str);

	printf(" *(str+2)=%p\n", *(str + 2));
	printf("**(str+2)=%c\n", **(str + 2));
	
	printf("   *str+2=%p\n", *str + 2);
	printf("**(str+2)=%c\n", *(*str + 2));

	printf("    *(str+3)+2 =%p\n",   *(str + 3) + 2);
	printf(" *(*(str+3)+2) =%c\n", *(*(str + 3) + 2));

	printf(" *(*(str+1)+2) =%c\n", *(*(str + 1) + 2));

	//system("PAUSE");
	//return 0;
}
