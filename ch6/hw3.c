#include<stdio.h>
#include<stdlib.h>
void d(void);
void e(void);
int q, w, r, x, y;
int hw3(){
	printf("��J�T�Ӿ��:");
 	scanf("%d",&q);
	scanf("%d",&w);
	scanf("%d",&r);
	d();
	e();
}
void d(void){
	if (q > w)
		if (q > r)
			x = q;
		else
			x = r;
	else
		if (w >r)
			x = w;
		else
			x = r;
		printf("�̤j�Ȭ�:%d", x);
}
void e(void){
	if (q < w)
		if (q < r)
			y = q; 
		else
			y = r;
	else
		if (w < r)
			y = w; 
		else
			y = r; 
	printf("�̤p�Ȭ�:%d", y);
}