#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//定義方法 
void ex3_1();
void ex3_2();
void ex3_3();
void ex3_4();
void ex3_5();
void ex3_6();
void ex3_7();
void ex3_8();

void hw1();
void hw2();
void hw3();
void hw4();
void hw5();
void hw6();

void main(void)
{
	int input;
	printf("1.  遞增與遞減運算子\n");
	printf("2.  條件運算子的範例\n");
	printf("3.  巢狀 if 敘述的練習\n");
	printf("4.  switch 敘述的範例\n");
	printf("5.  while迴圈的範例\n");
	printf("6.  以巢狀while迴圈改寫九九乘法表\n");
	printf("7.  以巢狀迴圈印出幾何圖形");
	printf("8.  以巢狀迴圈反印數字\n");
	printf("9.  HW1\n");
	printf("10. HW2\n");
	printf("11. HW3\n");
	printf("12. HW4\n");
	printf("13. HW5\n");
	printf("14. HW6\n");
	printf("----------------------------------\n");
	printf("請輸入要執行的範例? ");
	scanf("%d", &input);

	switch (input)
	{
	case 1:
		ex3_1();
		break;
	case 2:
		ex3_2();
		break;
	case 3:
		ex3_3();
		break;
	case 4:
		ex3_4();
		break;
	case 5:
		ex3_5();
		break;
	case 6:
		ex3_6();
		break;
	case 7:
		ex3_7();
		break;
	case 8:
		ex3_8();
		break;
	case 9:
		hw1();
		break;
	case 10:
		hw2();
		break;
	case 11:
		hw3();
		break;
	case 12:
		hw4();
		break;
	case 13:
		hw5();
		break;
	case 14:
		hw6();
		break;

	default:
		printf("你輸入的數字不在範圍內!\n");
		break;
	}

	system("pause");

}