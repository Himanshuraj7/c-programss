#include<stdio.h>
#include<conio.h>
void main(){
	int a,fact=1,i;
	printf("enter the no=");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	fact=fact*i;
	printf("fact=%d",fact);
}
