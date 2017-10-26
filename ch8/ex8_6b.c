#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COLUMN 3

//int sum(int[ROW][COLUMN], int, int);
int sum1(int (*arr)[COLUMN], int, int);

void ex8_6b()
{
	int row = 2, col = 3, total = 0;
	int arr[ROW][COLUMN] = { { 10, 20, 30 },{ 40, 50, 60 } };
	int elements = sizeof(arr) / sizeof(arr[0][0]);
	total = sum1(arr, ROW, COLUMN);
	printf("�b�}�C���� %d �Ӥ���\n", elements);
	//�C�L�G���}�C���������@�C�@�C���L�X
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

/*
   �� []  == *  �ۦP�N��
   �� p[] == *p
   �� p[row] == *(p+row)

   p[][2]  == (*p)[2]
   p[i][j] == *(*(p+i)+j) = *(*p+0+0);
   p[0][0] == *(*p);
   
*/

//int sum(int arr2[ROW][COLUMN], int row1, int col1) {
int sum1(int (*arr)[COLUMN], int row1, int col1) {
	int i, j, t = 0;
	for (i = 0; i < row1; i++) {
		for (j = 0; j < col1; j++) {
			//t += arr2[i][j];
			t += *(*(arr+i)+j);
			
		}
	}
	return t;
}
