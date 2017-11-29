#include<stdio.h>
#include<stdlib.h>
void input6_4b(void);
void output6_4b(void);
int ex6_4b()
{
	printf("此程式在測試全域變數\n");
	input6_4b();
	output6_4b();
}
int array[5];
void input6_4b(void)
{
	int index;
	for (index = 0; index < 5; index++)
	{
		printf("請輸入#%d整數:", index + 1);
		scanf("%d", &array[index]);
	}
}
void output6_4b(void)
{
	int index;
	printf("\n");
	for (index = 0; index < 5; index++)
	{
		printf("array[%d] is %d\n", index, array[index]);
	}
}