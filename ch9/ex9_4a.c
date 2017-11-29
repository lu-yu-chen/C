#include<stdio.h>
#include<stdlib.h>
int ex9_4a()
{
	struct student
	{
		char name[20];
		int score;
	};
	struct student *ptr;
	ptr = (struct student *) malloc(sizeof(struct student));
	printf("請輸入學生姓名:");
	scanf("%s", ptr->name);
	printf("請輸入學生成績:");
	scanf("%d", &ptr->score);
	printf("\n學生姓名為%s\n", ptr->name );
	printf("成績為%d\n", ptr->score);
}