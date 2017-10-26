/*
* File Name: Fibonacci.c
* Author: MH
* Since 2011/05/16
* Toolkit: Dev C++
*/

# include <stdlib.h>
# include <stdio.h>

void ex4() {

	int n, i, n_2 = 0, n_1 = 1, fib;

	while (1) {

		printf("The 0th number is 0, and the first number is 1\n");
		printf("ex : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 ...\n\n");
		printf("Please input an integer to show the last value of Fibonacci Sequence :\n");
		scanf("%d", &n);
		printf("\n");

		if (n == 0)
			fib = n_2;

		else if (n == 1)
			fib = n_1;

		else {

			for (i = 2; i <= n; i++) {
				fib = n_2 + n_1;
				n_2 = n_1;
				n_1 = fib;
			}

			n_2 = 0;
			n_1 = 1;

		}

		printf("The Fibonacci Sequence is %d\n\n", fib);

		system("PAUSE");
		system("CLS");

	}

	//return 0;

}