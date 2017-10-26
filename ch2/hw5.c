#include <stdio.h>
#include <stdlib.h>

void hw5(void) {
	int Tea1 = 0, Tea2 = 0, Count = 0, Total = 0;
	printf("¬Ã¯]¥¤¯ù­n´X²~:");
	scanf("%d", &Tea1);
	printf("¯QÀs®³ÅK­n´X²~:");
	scanf("%d", &Tea2);
	Total = Tea1 * 45 + Tea2 * 55;
	Count = Tea1 + Tea2;
	if (Count > 12 || Total >= 700 || Tea1 >= 10)
		Total = Total * 0.95;
	printf("Price:%d\n", Total);
	
	//system("pause");
	//return 0;
}

