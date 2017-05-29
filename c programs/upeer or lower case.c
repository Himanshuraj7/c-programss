#include<stdio.h>

void main(){
	char ch[34];
	printf("enter the alphABET=");
	scanf("%s",&ch);
	/*if(ch>='A' && ch<='Z')
	printf("up");
	else
        	printf("lower");*/
        	printf("%s",strupr(ch));
}
