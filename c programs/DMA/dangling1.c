#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *p;
{
auto int a=9;
p=&a;
printf("%d\t%p\n",*p,p);
}
printf("%d\t%p\n",a,p);
getch();
}
