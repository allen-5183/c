/* ex10-1a.c */
#include <stdio.h>
#include <stdlib.h>

void ex10_1a( )
{	
    /* 測試scanf函數在輸入字元的缺點 */
	char ch;
	int i;
	for(i = 1; i <=3 ; i++)  
	{
		printf("#%d 的輸入資料為: ", i);
		scanf("%c", &ch);      
		printf("#%d 的輸出資料為: %c\n\n", i, ch);
  	}
  	
	//system("PAUSE");
	//return 0;
}
