/* ex7-4b.c*/
#include <stdio.h>
#include <stdlib.h>
void bubble_sort_b()
{
	int i, j, k, temp, flag, size;
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
	for (i = 0; i<size - 1; i++) {
		flag = 0;
		for (j = 0; j<size - i - 1; j++)
			if (arr[j] > arr[j + 1]) {
				flag = 1;  /* 若有對調，則將flag設為1 */
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		printf("#%d pass: ", i + 1);
		for (k = 0; k<size; k++)
			printf("%d ", arr[k]);
		printf("\n");
		if (flag == 0) /* 當flag為0特，表示上一回合沒有對調，此表示已排序好五 */
			break;
	}
	/************************************/
	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");
	printf(".....After sorted.......\n");
	for (i = 0; i<size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
	//system("PAUSE");
	//return 0;
}