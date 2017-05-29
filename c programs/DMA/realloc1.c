#include<stdio.h>
#include<conio.h>
void main()
{
     int *p,i,n,n1;
     printf("enter n");
     scanf("%d",&n);
     p=(int*)malloc(n*sizeof(int));
     if(p==NULL)
     {
                printf("memory not allocated");
                }
     else
     {
     for(i=0;i<n;i++)
     scanf("%d",(p+i));
     }
     printf("enter new size");
     scanf("%d",&n1);
     p=(int*)realloc(p,n1*sizeof(int));
     if(p==NULL)
     {
                printf("memory not allocated");
                }
     else
     {
     for(i=n;i<n1;i++)
     scanf("%d",(p+i));
     for(i=0;i<n1;i++)
     printf("%d",*(p+i));
     }
     free(p);
     getch();
     }
     
