/* bugs7-2-2.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int arr[4] = (10, 20, 30, 40, 50);
   int i;
   for (i=1; i<=5; i++)
      printf("arr[%d]=%d\n", i, arr[i]);
   system("PAUSE");
   return 0;
}
