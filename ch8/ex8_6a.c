#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COLUMN 3

int sum(int[ROW][COLUMN], int, int);

void ex8_6a()
{
	int row=2, col=3, total = 0;
	int arr[ROW][COLUMN] = { { 10, 20, 30 },{ 40, 50, 60 } };
	int elements = sizeof(arr) / sizeof(arr[0][0]);
	total = sum(arr, ROW, COLUMN);
	printf("在陣列內有 %d 個元素\n", elements);
	//列印二維陣列內的元素一列一列的印出
	printf("Sum(\n");
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	printf(") is %d\n", total);
	//getchar();
	//return 0;
}

int sum(int arr2[ROW][COLUMN], int row1, int col1) {
	int i, j, t = 0;
	for (i = 0; i < row1; i++) {
		for (j = 0; j < col1; j++) {
			t += arr2[i][j];
		}
	}
	return t;
}

