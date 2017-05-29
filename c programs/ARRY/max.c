#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20];
	int i,max,n,c;	
	printf("enter size of array");
	scanf("%d", &n);
	printf("Enter the elements in the array n=");
	for (i=0; i<n; i++)
	{
	    scanf("%d", &a[i]);

	}
	max=a[0];

	for (i=0; i<n; i++)
	{
		if(max<a[i])
		{
			max=a[i];
			c=i;
		}
	}	
	printf("The largets element is %d at position %d",max,c+1);

	getch();
	}
