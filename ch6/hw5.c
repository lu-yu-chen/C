#include<stdio.h>
#include<stdlib.h>
void q();

void hw5(){
	int  i = 0;
	
	printf("輸入還要呼叫的次數:");
	scanf("%d", &i);
	for (int j = 0; j < i; j++)
	{
		q();
	}
}
void q()
{
	static int c = 100; 
	printf("呼叫次數:%d\n",++c);
}
