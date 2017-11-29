#include<stdio.h>
#include<stdlib.h>
void ex9_1c()
{
	struct order
	{
		char product[20];
		double price;
		int quantity;
	};
	struct order num1 = { "ipod nano", 6700.0, 20 };
	struct order num2;
	double total1, total2;
	total1 = num1.price*num1.quantity;
	printf("請輸入產品名稱:");
	scanf("%s", num2.product);
	printf("請輸入產品價格:");
	scanf("%1f", &num2.price);
	printf("請輸入訂購數量:");
	scanf("%d", &num2.quantity);
	total2 = num2.price*num2.quantity;
	printf("\n<<訂單列表>>\n");
	printf("產品名稱:%s\n", num1.product);
	printf("價格:%.1f\n", num1.price);
	printf("數量:%d\n", num1.quantity);
	printf("總價:%.1f\n\n",total1);
	printf("產品名稱:%s\n", num2.product);
	printf("價格:%.1f\n", num2.price);
	printf("數量:%d\n", num2.quantity);
	printf("總價:%.1f\n\n", total2);
}