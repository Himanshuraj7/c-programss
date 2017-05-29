#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n, *ptr,sum=0, i;
	printf("Enter the size of array");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("error");
		//exit(0);
	}else
	{
	
	printf("enter the elements in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum=sum+*(ptr+i);
				
	}
	printf("array elements are");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
		
	}
  printf("addition is %d",sum);
}
free(ptr);
getch();
return 0;

}
