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
	printf("\<<�C��>>\n");
	printf("�ǥͩm�W:%s\n", n.name);
	printf("���Z:%d\n", n.score);
}