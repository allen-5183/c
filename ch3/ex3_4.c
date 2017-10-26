#include <stdio.h>
#include <stdlib.h>

void ex3_4(void)
{
	int a, b;
	char oper;	
	//printf("Please input the expression:(ex:3+2): ");
	//scanf("%d %c &d", &a,&oper,&b);
	printf("Please 輸入加數: ");    scanf("%d",&a);
	printf("Please 輸入被加數: ");  scanf("%d",&b);
	printf("Please 輸入運算符號 +,-,*,/: ");  scanf(" %c",&oper);

	switch (oper)
	{
	case '+':
		printf("%d+%d=%d\n", a, b, a + b);    /* 印出a+b */
		break;
	case '-':
		printf("%d-%d=%d\n", a, b, a - b);    /* 印出a-b */
		break;
	case '*':
		printf("%d*%d=%d\n", a, b, a*b);      /* 印出a*b */
		break;
	case '/':
		printf("%d/%d=%d\n", a, b, a / b);  /* 印出a%b */
		break;
	default:
		printf("input error!!\n");            /* 印出字串 */
	}


	//system("pause");
	//return 0;
}