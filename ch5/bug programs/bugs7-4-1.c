/* bugs7-4-1.c */
#include <stdio.h>
int main()
{
   int a=100, b=200;
   printf("Before swapping: ");
   printf("a=%d, b=%d\n", a, b);
    
   /* 做兩數對調*/
   a=b;
   b=a;
   printf("After swapping: ");
   printf("a=%d, b=%d\n", a, b);
   system("PAUSE");
   return 0;
}
