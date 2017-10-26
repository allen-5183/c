#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//定義方法 
void ex5_1();
void ex5_2();
void ex5_3();
void ex5_4();

void hw1();
void hw2();
void hw3();
void hw4();
void hw5();

void main(void)
{
	int input;
	printf("1.  二維陣列元素的存取\n");
	printf("2.  找出三維陣列裡，所有元素的最大值\n");
	printf("3.  字元與字串之比較陣列的應用\n");
	printf("4.  簡單的函數範例\n");
	printf("5.  於程式裡呼叫函數\n");
	printf("6.  ex7_2b\n");
	printf("7.  ex7_2c\n");
	printf("8.  ex7_3a\n");
	printf("9.  ex7_3b\n");
	printf("10. 二維陣列初始值設定                              ex7_3c\n");
	printf("11. 二維陣列初始值設定-初始值個數少於陣列的元素個數 ex7_3d\n");
	printf("12. 二維陣列初始值設定-另一種初始值設定方式         ex7_3e\n");
	printf("13. 練習題一                                        ex5_ex1\n");
	printf("14. 練習題二(除錯)                                  ex5_ex2\n");
	printf("15. 氣泡排序法-1                                    ex7_4a\n");
	printf("16. 氣泡排序法-2                                    ex7_4b\n");
	printf("17.  ex7_4c\n");
	printf("18.  ex7_4d\n");
	printf("19.  氣泡排序法-1\n");
	printf("20.  氣泡排序法-2\n");
	printf("21.  二元搜尋法\n");
	printf("22.  字元輸出入 10-1a \n");
	printf("23.  字元輸出入 10-1b \n");
	printf("24.  字元輸出入 10-1c \n");
	printf("5.  HW1\n");
	printf("6.  HW2\n");
	printf("7.  HW3\n");
	printf("8.  HW4\n");
	printf("9.  HW5\n");

	printf("----------------------------------\n");
	printf("請輸入要執行的範例? ");
	scanf("%d", &input);
	while (getchar() != '\n')
		;
	switch (input)
	{
	case 1:
		ex5_1();
		break;
	case 2:
		ex5_2();
		break;
	case 3:
		ex5_3();
		break;
	case 4:
		ex5_4();
		break;
	case 5:
		ex5_5();
		break;
	case 6:
		
		break;
	case 7:
		break;
	case 8:
		break;
	case 9:
		break;
	case 10:
		ex7_3c();
		break;
	case 11:
		ex7_3d();
		break;
	case 12:
		ex7_3e();
		break;
	case 13:
		ex5_ex1();
		break;
	case 15:
		ex7_4a();
		break;
	case 16:
		ex7_4b();
		break;
	case 20:
		ex10_1a();
		break;
	case 21:
		ex10_1b();
		break;
	case 22:
		ex10_1c();
		break;
	default:
		printf("你輸入的數字不在範圍內!\n");
		break;
	}

	system("pause");

}