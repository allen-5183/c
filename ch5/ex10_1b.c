/* ex10-1b.c */
#include <stdio.h>
#include <stdlib.h>

void ex10_1b( )
{	
	/* 處理 scanf()輸入字元的缺點 */
	char ch;
	int i;
	for(i = 1; i <=3 ; i++)  /* 使用迴圈要求輸入3次字元 */
	{
		printf("#%d 的輸入資料為: ", i);
		scanf("%c", &ch);  /* 以scanf( )輸入字元 */
		printf("#%d 的輸出資料為: %c\n\n", i, ch);
		while (getchar() != '\n')
		  continue;
	}
	
	//system("PAUSE");
	//return 0;
}
