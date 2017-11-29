#include<stdio.h>
#include<stdlib.h>
int ex8_4(){
	double d;
	double *p = &d;
	double **pp = &p;
	printf("請輸入一double數:");
	scanf("%.lf",d);
	printf("d=%.2f,*p=%.2f,and**pp=%.2f\n", d, *p, **pp);
}