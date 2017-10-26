#include <stdio.h>
#include <stdlib.h>
int number = 100;      /* ﹚竡办跑计 */
void output_4c(void);  /* output( ) */

void function_4c()
{
	/* 代刚ㄧ计跋办跑计籔办跑计丁彼 */
	printf("number is %d\n", number);
	output_4c();                             /* ㊣output( )ㄧ计 */
	system("PAUSE");
	return 0;
}
/* ﹚竡 output_4c( ) */
void output_4c(void)
{
	int number = 200;  /* ﹚竡跋办跑计 */
	printf("number is %d\n", number); /* 块number */
}
