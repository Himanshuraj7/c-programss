#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
int *p;
p=(int *)malloc(1*sizeof(int));
*p=24;
printf("%d\t%p\n",*(p),p);
free(p);
printf("%d\t%p\n",*(p),p);
getch();
}
