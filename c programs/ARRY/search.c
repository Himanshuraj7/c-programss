#include<stdio.h>
#include<conio.h>
void main()
{
     int arr[10],i,loc=-1,key;
     printf("enter the elements in array");
     for(i=0;i<4;i++)
     {
        scanf("%d",&arr[i]);
        }
   /*  for(i=0;i<9;i++)
     {
        printf("%d    ",arr[i]);
        } */
     printf("enter the element u want to search");
     scanf("%d",&key);
     for(i=0;i<4;i++)
     {
            if(key==arr[i])
            {
            loc=i+1;
            printf(" element found at location=%d",loc);
            
      }

else
printf("element not found");
     getch();
     }
 }
