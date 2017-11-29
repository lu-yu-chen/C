#include<stdio.h>
#include<stdlib.h>
int ex7_2(){
	int *prt, num = 20;
	prt = &num;
	printf(" num=%d,&num=%p\n", num, &num);
	printf("*prt=%d, prt=%p,&prt=%p\n", *prt, prt, &prt);
	system("pause");
	return 0;
}