#include<stdio.h>
#include<stdlib.h>
void q();

void hw5(){
	int  i = 0;
	
	printf("��J�٭n�I�s������:");
	scanf("%d", &i);
	for (int j = 0; j < i; j++)
	{
		q();
	}
}
void q()
{
	static int c = 100; 
	printf("�I�s����:%d\n",++c);
}
