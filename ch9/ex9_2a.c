#include<stdio.h>
#include<stdlib.h>
void ex9_2a()
{
	struct employee
	{
		char id[7];
		char name[20];
		int salary;
	};
	struct employee general = { "D62128", "Johnson", 39000 };
	struct employee *ptr = &general;
	printf("<<使用->運算子取得各結構元素>>\n");
	printf("ID number:%s\n", ptr->id);
	printf("Employee:%s\n", ptr->name);
	printf("salary:%d\n\n", ptr->salary);
	printf("<<使用(*).運算子取得各結構元素>>\n");
	printf("ID number:%s\n", (*ptr).id);
	printf("Employee:%s\n", (*ptr).name);
	printf("salary:%d\n\n", (*ptr).salary);
}