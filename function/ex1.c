#include <stdio.h>
#include <stdlib.h>
void ex1_output();   //ㄧ计
void dash0();

void ex1() {
	printf("㊣ output ㄧ计!!\n");
	dash0();
	ex1_output(); /* ㊣ output ㄧ计  */
	dash0();
	printf("㊣挡, over!!\n");
	system("PAUSE");
	return 0;
}

/* output() ㄧ计﹚竡 */
void ex1_output()
{
	printf("и尺舧 iMac\n");
	printf("и尺舧 iPad\n");
}

void dash0()
{
	int i;
	for (i = 0; i<50; i++)
		printf("-");
	printf("\n");
}