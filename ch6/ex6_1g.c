#include<stdio.h>
#include<stdlib.h>
int cube(int);
int num, sum;
int ex6_1g()
{

	
	sum = cube( num );
	printf(" %d ���T���謰 %d \n " , num , sum);
}
int cube(int a)
{
	int ans;
	printf("�п�Jnum����:");
	scanf("%d\n", &num);
	ans = a*a*a;
	return ans;
}