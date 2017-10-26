#include <stdio.h>
#include <stdlib.h>

void ex8_8a()
{
	char *str[13] = { "ab","cd","ef","gh","ij","kl","mn","op","qr","st","uv","wx","yz" };

	for (int i = 0; i< sizeof(str) / sizeof(str[0]); i++)
		for (int j = 0; j < 2; j++) {
			//printf("**(str+%d)+%d = %c\n", i, j, **(str + i) + j);

			printf("%c", **(str + i) + j);
		}
	printf("\n\n");
	system("pause");

	//system("PAUSE");
	//return 0;
}

