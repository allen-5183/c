/* ex7-4a.c*/
#include <stdio.h>
#include <stdlib.h>
/*
   size: 資料筆數
*/

void bubble_sort_a()
{
	int i, j, k, temp, size;
	int arr[] = { 80, 30, 40, 70, 50, 60 };
	size = sizeof(arr) / sizeof(int);
	printf(".....Before sorted........\n");
	for (i = 0; i <= size - 1; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");

	/**********Bubble sort****************/
	/* 
	  總共有 size 個資料, 所以會有 size-1 次的 pass
	  表示這些資料要執行多少次的比較, 次數為資料總筆數 -1 
	    
	*/
	for (i = 0; i < size - 1; i++) {
		/* 要比較的資料, 第一次pass 會減1, 第2次會減2, 第三次會減3,....依此類推, 所以迴圈的條件運算式為 j < size-1-i */
		for (j = 0; j < size - i - 1; j++)             
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		printf("#%d pass: ", i + 1);
		for (k = 0; k < size; k++)
			printf("%d ", arr[k]);
		printf("\n");
	}
	/************************************/
	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");
	printf(".....After sorted.......\n");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	//system("PAUSE");
	//return 0;
}