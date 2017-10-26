#include <stdio.h>
#include <stdlib.h>

void ex4_3(void) {
	int A[5] = { 7,48,30,17,62 };
	int i, min, max;
	min = max = A[0]; /* 將max與min均設為陣列的第一個元素 */
	for (i = 0; i<5; i++)
	{
		if (A[i]>max) /* 判斷A[i]是否大於max */
			max = A[i];
		if (A[i]<min) /* 判斷A[i]是否小於min */
			min = A[i];
	}
	printf("The maximum value of the array element :%d\n", max);
	printf("The minimum value of the array element :%d\n", min);
	
	//system("pause");
	//return 0;
}