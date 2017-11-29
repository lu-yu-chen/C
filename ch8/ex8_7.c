#include<stdio.h>
#include<stdlib.h>
int ex8_7(){
	char *str[4] = { "abc", "def", "ghi", "jkl" };
	printf("*str=%p\n", *str);                              //a
	printf("**str=%c\n", **str);
	printf("*(str+2)=%p\n", *(str + 2));                    //g
	printf("**(str+2)=%c\n", **(str + 2));
	printf("*str+2=%p\n", *str + 2);                        //c
	printf("*(*str+2)=%c\n", *(*str + 2));
	printf("*((str+3)+2)=%p\n", *((str+3)+2));              //l
	printf("*(*(str+3)+2)=%c\n", *(*(str+3)+2));
	printf("*((str+1)+2)=%p\n", *((str + 1) + 2));          //f
	printf("*(*(str+1)+2)=%c\n", *(*(str + 1) + 2));
}