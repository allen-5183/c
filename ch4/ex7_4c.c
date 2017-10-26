/* ex7-4c.c*/
#include <stdio.h>
#include <stdlib.h>
void ex7_4c()
{
	int i, j, k, temp, flag, size;
	int arr[]={80, 90, 40, 70, 50, 60};
	size = sizeof(arr) / sizeof(int);
	printf(".....Before sorted........\n");
	for(i=0; i<=size-1; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for(i=1; i<=25; i++)
		printf("-");
	printf("\n");

	/**********Bubble sort****************/
	/* 總共有size個資料，所以會有size-1次的pass */ 
	for(i=0; i<size-1; i++) {
		flag=0; /* 用來判斷是否要再繼續排序 */ 
		/* 印出第幾次的 pass 的資料 */ 
		printf("#%2d pass 的資料計有: ", i+1);
		for(k=0; k<size-i; k++)
		    printf("%d ", arr[k]);
        printf("\n");
        
        /* 要比較的資料，第一次pass會減1，第二次pass會減2，第三次pass會減3，依此類推*/ 
        /* 所以迴圈的條件運算式為 j<size-1-i */ 
		for(j=0; j<size-1-i; j++)
		{
		    /* 當此筆資料大於下一筆資料時，則加以對調 */ 
			if(arr[j] > arr[j+1]) {
				flag=1;  /* 若有對調，則將flag設為1 */ 
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			/* 印出每一次compare後的資料 */ 
			printf("   #%d compare: ", j+1);
			for(k=0; k<size-i; k++)
			    printf("%d ", arr[k]);
            printf("\n");
        }
        
        /* 印出每一次pass後的資料 */ 
		printf("#%d pass 結束時資料順序如下: \n", i+1);
		for(k=0; k<size; k++)
			printf("%d ", arr[k]);
		printf("\n\n");
		if(flag == 0) /* 當flag為0特，表示上一回合沒有對調，此表示已排序好五 */ 
			break;
	}
	/************************************/
	for(i=1; i<=25; i++)
	    printf("-");
	printf("\n");
	printf(".....After sorted.......\n");
	for(i=0; i<size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
	//system("PAUSE");
	//return 0;
}
