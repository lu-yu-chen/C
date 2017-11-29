#include<stdio.h>
#include<stdlib.h>
int fib(int a) {
	if (a == 0)
		return 0;
	if (a == 1)
		return 1;
	return(fib(a - 1) + fib(a - 2));
}
int hw4(){
	int input, i;
	while (1){
		printf("到第幾項?\n");
		scanf("%d", &input);
		printf("\n");
		if (input<0)
			printf("input cannot less than 0\n");
		else{
			for (i = 1; i <= input; i++)
				printf("%d", fib(i));
		}
		printf("\n");
	}
}