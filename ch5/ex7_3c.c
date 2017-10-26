/* ex7-3c.c*/
#include <stdio.h>
#include <stdlib.h>
void ex7_3c( )
{	  
	/* 此二維陣列表示-考三天(列註標)，一天考三科(行註標) */
	int score[3][3] = { {74, 72, 63}, {83, 92, 74}, {84, 82, 65} };  // { 74, 72, 63, 83, 92, 74, 84, 82, 65 };
	int index1, index2, total = 0;
	for(index1 = 0; index1 < 3; index1++)          /* 外圈控制考試日期 */
	{
		printf("\n第 %d 天的分數分別為: ", index1+1);
		for(index2 = 0; index2 < 3; index2++)      /* 內圈控制考試科目 */
		{
			printf("%3d", score[index1][index2]);  /* 印出各科成績 */
			total += score[index1][index2];        /* 將成績加總 */
		}
	}
	printf("\n\n總分: %d\n", total);             
	printf("平均分數: %.2f\n", total / 9.0);       /* int/float=float   自動轉型*/
    
	//system("PAUSE");
    //return 0;	
}
