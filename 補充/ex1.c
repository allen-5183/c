#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *data, int n);

void ex1(void)
{
	int i, n, data[10];

	printf("請輸入資料筆數 n(<= 10): ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("請輸入第 %d 筆資料: ", i + 1);
		scanf("%d", &data[i]);
	}

	// 執行氣泡排序法
	bubblesort(data, n);

	printf("\n排序後的結果: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", data[i]);
	}

	printf("\n");
	system("pause");
}

void bubblesort(int *data, int n)
{
	int i, j, temp;
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j <= i - 1; j++)
		{
			if (data[j] < data[j + 1])
			{
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
}