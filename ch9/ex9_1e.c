#include<stdio.h>
#include<stdlib.h>
void ex9_1e()
{
	struct score
	{
		char name[20];
		int score;
	};

	struct score n = { "a", 90 };
	printf("\<<列表>>\n");
	printf("學生姓名:%s\n", n.name);
	printf("成績:%d\n", n.score);
}