#include<stdio.h>
#include<conio.h>
void main(){
	int a;
	printf("enter the no. of the day you want to diaplay=");
	scanf("%d",&a);
	switch (a){
	case 1:
	printf("today is monday");
	break;
	case 2:
	printf("today is tueday");
	break;
	case 3:
	printf("today is wednesday");
	break;
	default:
	printf("wrong input");
}
}
