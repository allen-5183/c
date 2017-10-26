/* ex10-1c.c */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void output(char);  /* 函數output( )的原型宣告 */
void ex10_1c( )
{	
	/* 測試字元的輸出入函數 */
	char ch;
	printf("\n\n...使用getch()輸入...\n");
	printf("請輸入一字元: ");
	ch = _getch( ); 
	output(ch);   
	printf("\n\n...使用getche()輸入...\n");
	printf("請輸入一字元: ");
	ch = _getche( ); 
	output(ch);  
	printf("\n\n...使用getchar()輸入...\n");
	printf("請輸入一字元: ");
	ch = getchar( ); 
	output(ch); 
	printf("\n");
	
	//system("PAUSE");
	//return 0;
}

/* 定義output( )函數，傳遞參數以c接收 */
void output(char c)
{
	printf("\n使用putchar()輸出字元: ");
	putchar(c); 
}
