#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//定義方法 
void ex1_1();
void ex1_2();
void ex1_3();
void ex1_4();
void ex1_5();
void ex1_6();
void ex1_7();

void hw1();
void hw2();
void hw3();
void hw4();

void main(void)
{
	int input;
	printf("1.  第一個C程式語言\n");
	printf("2.  程式區塊及本體\n");
	printf("3.  語法錯誤\n");
	printf("4.  語意錯誤\n");
	printf("5.  溢位(overflow)\n");
	printf("6.  控制輸出欄位的寬度\n");
	printf("7.  輸入函數scanf()");
	printf("8.  HW1\n");
	printf("9.  HW2\n");
	printf("10. HW3\n");
	printf("11. HW4\n");
	printf("----------------------------------\n");
	printf("請輸入要執行的範例? ");
	scanf("%d", &input);

	switch (input)
	{
	case 1:
		ex1_1();
		break;
	case 2:
		ex1_2();
		break;
	case 3:
		ex1_3();
		break;
	case 4:
		ex1_4();
		break;
	case 5:
		ex1_5();
		break;
	case 6:
		ex1_6();
		break;
	case 7:
		ex1_7();
		break;
	case 8:
		hw1();
		break;
	case 9:
		hw2();
		break;
	case 10:
		hw3();
		break;
	case 11:
		hw4();
		break;
	default:
		printf("你輸入的數字不在範圍內!\n");
		break;
	}

	system("pause");

}