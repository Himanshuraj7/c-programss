#include<stdio.h>
int f1();
void main(){
	int res;
	res=sum();
	printf("%d",res);
}int sum(){
	int a=2,b=3,sum;
	sum=a+b;
	return sum;
}
