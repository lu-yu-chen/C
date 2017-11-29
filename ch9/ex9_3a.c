#include<stdio.h>
#include<stdlib.h>
int ex9_3a()
{
	struct student
	{
		int id;
		char name[10];
		double score;
	};
	struct student classes[5] = {
		{ 10811, "john",88.0 },
		{ 10812, "mary",82.0 },
		{ 10813, "bob",76.5 },
		{ 10814, "helen",91.0 },
		{10815,"peter",61.5}
	};
	int i;
	printf("學生名單如下\n");
	printf("-------------\n\n");
	printf("學號 姓名 分數\n");
	for (i =0; i < 5; i++)
		printf("%d %-10s %5.1f\n", classes[i].id, classes[i].name, classes[i].score);
}