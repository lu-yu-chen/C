#include<stdio.h>
#include<stdlib.h>
void ex2_4()
{
	int score;
	printf("Please input a score:");
	scanf("%d", &score);

	if ((score<0) || (score>100))
		printf("¿é¤J¿ù»~!!\n");
	if ((score<60) || (score>49))
		printf("make up exams!!\n");
}
