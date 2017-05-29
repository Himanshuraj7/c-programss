#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
     int *p,*p1,i,j,n;
     printf("enter n");
     scanf("%d",&n);
     p=(int*)malloc(n*sizeof(int));
     p1=(int*)malloc(n*sizeof(int));
     for(i=0;i<n;i++)
     {
            scanf("%d",(p+i));
     }
     j=0;
     for(i=n-1;i>=0;i--)
     {
         *(p1+j)=*(p+i);
         j++;
     }
     for(i=0;i<n;i++)
     {
            printf("%d  ",*(p1+i));
     }
     free(p);
     free(p1);
     getch();
     }
     
     
