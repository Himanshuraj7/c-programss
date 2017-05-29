#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
int *p;
int i,n1,n2;
printf("enter size");
scanf("%d",&n1);
p=(int*)malloc(n1*sizeof(int));
if(p!=NULL)
{
 printf("Space is allocated:\n\n");
 printf("Enter the elements:\n");
 for(i=0;i<n1;i++)
   scanf("%d",(p+i));

      printf("enter new size of array:");
       scanf("%d",&n2);

       p=(int*)realloc(p,n2*sizeof(int));
	if(p==NULL)
	    printf("No more space");
	 else
	 {
       for(i=n1;i<n2;i++)
	 {
		   scanf("%d",(p+i));
	 }

   }
for(i=0;i<n2;i++)
   printf("%d \t",*(p+i));


 free(p);
 }

 getch();
}
