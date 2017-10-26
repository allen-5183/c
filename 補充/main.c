#include "stdafx.h"

//定義方法 int add(int x, int y)
void ex1();
int gcd();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void test();

int main()
{
	int input;
	printf("1.  氣泡式排序法\n");
	printf("2.  公因數 公倍數\n");
	printf("3.  質數\n");
	printf("4.  費式數列用迴圈寫法\n");
	printf("5.  遞迴法費式數列\n");
	printf("6.  99乘法表\n");
	printf("7.  N階層\n");
	printf("8.  印聖誕樹\n");
	printf("9.  test\n");

	printf("----------------------------------\n");
	printf("請輸入要執行的範例? ");
	scanf("%d", &input);

	switch (input)
	{
	case 1:
		ex1();
		break;
	case 2:
		gcd();
		break;
	case 3:
		ex3();
		break;
	case 4:
		ex4();
		break;
	case 5:
		ex5();
		break;
	case 6:
		ex6();
		break;
	case 7:
		ex7();
		break;
	case 8:
		ex8();
		break;
	case 9:
		test();
		break;
	case 10:
		
		break;
	case 11:
		
		break;
	case 12:
		
		break;
	case 13:
		
		break;
	case 14:
		
		break;
	default:
		printf("你輸入的數字不在範圍內!\n");
		break;
	}

	system("pause");
	return 0;
}
