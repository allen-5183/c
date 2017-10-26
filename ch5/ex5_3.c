#include <stdio.h>
#include <stdlib.h>

void ex5_3(void)
{
	/*
	   字串儲存時會多一個 Byte 來存放結束符號 \O
	*/
	char ch = 'a';                /* 宣告字元變數ch */
	char str1[] = "a";            /* 宣告字串變數str1 */
	char str2[] = "Sweet home";   /* 宣告字串變數str2 */

	printf("ch:%d byte\n",sizeof(ch));
	printf("str1:%d byte\n", sizeof(str1));
	printf("str2:%d byte\n",sizeof(str2));
	
	//system("pause");
	//return 0;
}