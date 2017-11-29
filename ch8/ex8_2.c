#include<stdio.h>
#include<stdlib.h>
int ex8_2(){
		int x = 100;
		int *p1 = &x;
		int **p2 = &p1;
		int ***p3 = &p2;
		printf("&x=%p,x=%d\n", &x, x);
		printf("&p1=%p,p1=%p\n", &p1, p1);
		printf("&p2=%p,p2=%p\n", &p2, p2);
		printf("&p3=%p,p3=%p\n", &p3, p3);
		printf("p1¦û%dbytes,p2¦û%dbytes,p3¦û%dbytes\n", sizeof(p1), sizeof(p2) ,sizeof(p3));
}