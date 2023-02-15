/******************************************************
C Programming in Linux (c) David Haskins 2008
chapter1_1.c
*******************************************************/
#include<stdio.h>

int main(int argc, char*argv[])
{
int i=0;
printf("Hell, you are learning C!!\n");

printf("Hello Tran Dinh Hung QE170194. Hung is learning C on Abuntu");
printf("Number of arguments to the main function:%d\n",argc);
for(i=0; i<argc; i++)

{
printf("argument number %d is %s\n",i,argv[i]);
}

return 0;
}
