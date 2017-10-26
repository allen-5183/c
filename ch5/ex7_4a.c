/* ex7-4a.c*/
#include <stdio.h>
#include <stdlib.h>
void ex7_4a()
{
	int i, j, k, temp, size;
	int arr[] = { 80, 30, 40, 70, 50, 60 };
	size = sizeof(arr) / sizeof(int);
	printf("..... 資料排序前........\n");
	
	for (i = 0; i <= size - 1; i++)
		printf("%d ", arr[i]);
	printf("\n");

	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");

	/**********Bubble sort****************/
	for (i = 0; i<size - 1; i++) {
		for (j = 0; j<size - i - 1; j++)
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		printf("#%d pass: ", i + 1);
		for (k = 0; k<size; k++)
			printf("%d ", arr[k]);
		printf("\n");
	}
	/************************************/

	for (i = 1; i <= 25; i++)
		printf("-");
	printf(".....資料排序後...\n");

	for (i = 0; i<size; i++)
		printf("%d ", arr[i]);
	printf("\n");


}
