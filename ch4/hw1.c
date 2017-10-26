#include <stdio.h>
#include <stdlib.h>

void hw1(void)
{
	int x = 1;
	int Even, Odd;
	Even = Odd = 0;
	while (x <= 100)
	{
		if (x % 2 == 0)  Even += x;
		if (x % 2 == 1)  Odd += x;
		x++;
	}
	printf("°¸¼Æ: 2+4...+100=%4d\n", Even);
	printf("©_¼Æ: 1+3...+ 99=%4d\n", Odd);
	
	//system("pause");
	//return 0;
}
