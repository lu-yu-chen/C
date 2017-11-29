#include<stdio.h>
#include<stdlib.h>
int cube(int);
int num, sum;
int ex6_1g()
{

	
	sum = cube( num );
	printf(" %d 的三次方為 %d \n " , num , sum);
}
int cube(int a)
{
	int ans;
	printf("請輸入num的值:");
	scanf("%d\n", &num);
	ans = a*a*a;
	return ans;
}