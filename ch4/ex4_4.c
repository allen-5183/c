#include <stdio.h>
#include <stdlib.h>
#define MAX 5                  /* 定義MAX為5 */

void ex4_4(void)
{
	int score[MAX];            /* 宣告score 陣列，可存放 MAX 個整數 */
	int i = 0, num;
	float sum = 0.0f;
	printf("Please input the score, input 0 to end:\n");
	do
	{
		if (i == MAX)          /* 當i的值為MAX時，表示陣列已滿，即停止輸入 */
		{
			printf("Array space has been used up!!\n");
			i++;               /* 此行先將i值加1，因為23行會把i的值減1掉 */
			break;
		}
		printf("Please input the score:");
		scanf("%d", &score[i]);
	} while (score[i++]>0);    /* 輸入成績，輸入0時結束 */
	
	num = i - 1;
	for (i = 0; i<num; i++)
		sum += score[i];       /* 計算平均成績 */
	printf("average score %.2f\n", sum / num);
	
	//system("pause");
	//return 0;
}