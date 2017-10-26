#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//定義方法 
void ex8_1();
void ex8_2();
void ex8_3();
void ex8_4();
void ex8_5();
void ex8_6();
void ex8_7();
void ex8_8();
void ex8_9();
void ex8_10();
void ex8_11();

//void ex5_3();
//void ex5_4();



void main(void)
{
	int input;
	printf("1.  雙重指標使用範例\n");
	printf("2.  三重指標使用範例\n");
	printf("3.  指標變數除錯(一)\n");
	printf("4.  指標變數除錯(二)\n");
	printf("5.  修改1, x 的資料型態為字元\n");
	printf("6.  指標陣列與二維陣列(一)\n");
	printf("7.  指標陣列與二維陣列(二)\n");
	printf("8.  變數值的互換(二)\n");
	printf("9.  傳回多個數值的函數\n");
	printf("10. 陣列名稱的值即陣列的位址\n");
	printf("11. 利用指標存取陣列的內容\n");
	printf("----------------------------------\n");
	printf("請輸入要執行的範例? ");
	scanf("%d", &input);
	while (getchar() != '\n')
		;
	switch (input)
	{
	case 1:
		ex8_1();
		break;
	case 2:
		ex8_2();
		break;
	case 3:
		ex8_3();
		break;
	case 4:
		ex8_4();
		break;
	case 5:
		ex8_5();
		break;
	case 6:
		ex8_6();
		break;
	case 7:
		ex8_7();
		break;
	case 8:
		ex8_8a();
		break;
	case 9:
		ex8_8b();
		break;
	case 10:
		//ex8_10();
		break;
	case 11:
		//ex8_11();
		break;
	default:
		printf("你輸入的數字不在範圍內!\n");
		break;
	}

	system("pause");

}