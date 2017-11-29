#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	struct student
	{
		int id;
		char name[10];
		double score;
	};
	struct  student classes[10];
	int index = 0;
	void create();
	void list();
	int ex9_3b()
	{
		char option;
		do
		{
			printf("\n1 => create student data\n");
			printf("2 => list student data\n");
			printf("3 => quit\n");
			printf("please enter your choice:");
			option = getchar();
			puts("");
			switch (option)
			{
			case '1':
				create();
				break;
			case '2':
				list();
				break;
			case '3':
				printf("bye bye~~\n");
				break;
			default:printf("option error!!\n");}
		} while (option != '3');
		}
	void create()
	{
		if (index >= 10){
			printf("the array is full\n");
			return;
		}
		printf("\n<<creating student data>>\n");
		printf("student id:");
		scanf("%d", &classes[index].id);
		while (getchar() != '\n')
			continue;
		printf("student name:");
		scanf("%s", classes[index].name);
		printf("student score:");
		scanf("%lf", &classes[index].score);
		index++;
	}
	void list()
	{
		int i;
		printf("\n<<listing student data>>\n");
		for (i = 0; i < index; i++);
		printf("%-10d %-10s %5.1f\n", classes[i].id, classes[i].name, classes[i].score);
	}