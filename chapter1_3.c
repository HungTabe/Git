/******************************************************
C Programming in Linux (c) David Haskins 2008
chapter1_3.c
*******************************************************/
#include<stdio.h>

int main(int argc, char*argv[])
{
int i=0;
printf("Content-type:text/plain\n\n");

printf("Hello Tran Dinh Hung QE170194. Hung is learning C on Abuntu");
printf("Hello, you are still learning C!!\n");
printf("Number of arguments to the main function:%d\n",argc);
for(i=0;i<argc;i++)
{
printf("argument number %d is %s\n",i, argv[i]);
}

return 0;
}
