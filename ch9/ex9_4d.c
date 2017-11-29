#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void insert9_4d();
void del();
void list9_4d();

struct student
{
	int id;	              
	char name[10];	     
	double score;	      
	struct student *next;  
};

struct student *head, *ptr;

int ex9_4d()
{
	char option;
	head = (struct student *) malloc(sizeof(struct student));
	head->next = NULL;    
	do
	{
		printf("\n1 => 新增一節點\n");
		printf("2 => 刪除一節點\n");
		printf("3 => 列印串列的所有節點\n");
		printf("4 => 結束\n");
		printf("請選擇一項目: ");
		option = getchar();  
		switch (option)
		{
		case '1':	insert9_4d();
			break;
		case '2':	del();
			break;
		case '3':	list9_4d();
			break;
		case '4':	printf("Bye bye!!\n");
			break;
		default:	printf("Option error!!\n");
		}
	} while (option != '4');  
	return 0;
}

void insert9_4d()
{
	ptr = (struct student *) malloc(sizeof(struct student));

	printf("\n<< Insert a student data >>\n");
	printf("Student ID <int> : ");
	scanf("%d", &ptr->id);

	printf("Student name <string> : ");
	scanf("%s", ptr->name);

	printf("Student score <double> : ");
	scanf("%lf", &ptr->score);


	ptr->next = head->next;
	head->next = ptr;

}

void del()
{
	struct student *current;
	current = head->next;

	if (current == NULL)
		printf("The linked list is empty !!!\n");
	else
	{
		head->next = current->next; 
		printf("\n<< Delete a student data >>\n");
		printf("%-10d %-10s %-10.2f\n",
			current->id, current->name, current->score);
		free(current);
	}
}

void list9_4d()
{
	struct student *current;
	if (head->next == NULL)
		printf("No data\n");
	else
	{
		current = head->next;
		printf("\n<< Listing student data >>\n");

		while (current != NULL) 
		{
			printf("%-10d %-10s %-10.2f\n",
				current->id, current->name, current->score);
			current = current->next;
		}
	}
}