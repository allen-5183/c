#include <stdio.h>
#include <stdlib.h>

void hw3(void)
{
	float t;
	printf("請輸入氣溫 => ");
	scanf("%f", &t);
	if (t >= 20 && t <= 22) {
		printf("請加一件薄外套!\n");
	}
	else if (t >= 14 && t <= 19)
		printf("天氣冷, 請穿上外套!\n");

	printf("今天氣溫 = %.1f\n", t);
	
	//system("pause");
	//return 0;
}
