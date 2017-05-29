#include<stdio.h>
#include<conio.h>
void main(){
	int a=3,d=5,c;
	/*a=a+d;
	d=a-d;
	a=a-d;*/
	c=a;
	a=d;
	d=c;
	printf("after swapping a=%d\nd=%d",a,d);
}
