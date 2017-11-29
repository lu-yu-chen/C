#include<stdio.h>
#include<stdlib.h>
int ex8_3(){
	int a = 100;
	int *p = &a;
	int **pp = &p;
	printf("a=%d,*p=%d,and**pp=%d\n",a,*p,**pp);
}