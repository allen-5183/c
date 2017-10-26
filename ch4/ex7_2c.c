/* ex7-2c.c*/
#include <stdio.h>
#include <stdlib.h>
void ex7_2c( )
{
   /* 設定陣列初值 */
   double num1[6] = {11.1, 22.2, 33.3, 44.4, 55.5};
   int num2[ ] = {1, 2, 3, 4, 5, 6};  /* 元素個數隨初值個數而定 */
   int i;
 
   for(i = 0; i < 6; i++)   
      printf("num1[%d]=%.1f\n", i, num1[i]);   
  
   printf("\n\n");
   for(i = 0;  i < 6; i++)   
      printf("num2[%d]=%d\n",i, num2[i]);
      
   printf("\nnum1陣列佔 %d bytes\n", sizeof(num1));
   printf("num2陣列佔 %d bytes\n", sizeof(num2));
   
   //system("PAUSE");
   //return 0;
}
