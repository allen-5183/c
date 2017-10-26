#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//定義方法 
void ex4_1();
void ex4_2();
void ex4_3();
void ex4_4();

void hw1();
void hw2();
void hw3();
void hw4();
void hw5();

void main(void)
{
	int input;
	printf("1.  do while迴圈\n");
	printf("2.  陣列的範例\n");
	printf("3.  陣列的應用－最大與最小值\n");
	printf("4.  陣列界線的檢查\n");
	printf("5.  HW1\n");
	printf("6.  HW2\n");
	printf("7.  HW3\n");
	printf("8.  HW4\n");
	printf("9.  HW5\n");

	printf("----------------------------------\n");
	printf("請輸入要執行的範例? ");
	scanf("%d", &input);

	switch (input)
	{
	case 1:
		ex4_1();
		break;
	case 2:
		ex4_2();
		break;
	case 3:
		ex4_3();
		break;
	case 4:
		ex4_4();
		break;
	case 5:
		ex7_2a();
		break;
	case 6:
		ex7_2b();
		break;
	case 7:
		ex7_2c();
		break;
	case 8:
		ex7_3a();
		break;
	case 9:
		ex7_3b();
		break;
	case 10:
		ex7_3c();
		break;
	default:
		printf("你輸入的數字不在範圍內!\n");
		break;
	}

	system("pause");

}