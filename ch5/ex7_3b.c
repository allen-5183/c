/* ex7-3b.c */
#include <stdio.h>
#include <stdlib.h>
void ex7_3b( )
{
   /* 於二維陣列中，再將輸入值由二維陣列中取出並印出 */
   int num[2][3];
   int index1, index2;
   /* 以巢狀迴圈處理二維陣列輸入 */
   for(index1 = 0; index1 < 2; index1++)  
      for(index2 = 0; index2 < 3; index2++)
      {
         printf("請輸入num[%d][%d]的資料: ", index1, index2);
         scanf("%d", &num[index1][index2]);
      }
   printf("\n此二維陣列的資料如下:\n");
   for(index1 = 0; index1 < 2; index1++) 
   {
      for(index2 = 0; index2 < 3; index2++)
         printf("%3d ", num[index1][index2]);
      printf("\n");
   }
   
   //system("PAUSE");    
   //return 0;
}

