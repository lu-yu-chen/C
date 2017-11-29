#include<stdio.h>
#include<stdlib.h>
void ex8_1(void){
	int x = 100;
	int *p1 = &x;
	int **p2 = &p1;
	printf("&x=%p,x=%d\n", &x, x);
	printf("&p1=%p,p1=%p\n", &p1, p1);
	printf("&p2=%p,p2=%p\n", &p2, p2);
	printf("p1¦û%dbytes,p2¦û%dbytes\n", sizeof(p1), sizeof(p2));
}