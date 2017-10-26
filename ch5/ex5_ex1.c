#include <stdio.h>
#include <stdlib.h>

void ex5_ex1()
{
	
	int info[10][2], i;
	
	for (i = 0; i <= 9; i++){
			printf("請輸入第 %2d 個人的身高: ", i+1);
			scanf("%d", &info[i][1]);
			info[i][0] = i + 1;
	}

	printf("\n------------------------\n");
	for (i = 0; i < 9; i++)
		printf("第%2d 個人的身高為: %d\n", info[i][0], info[i][1]);
		
	//system("PAUSE");    
	//return 0;
}
