#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char *str;
	int n;
	printf("enter n");
	scanf("%d",&n);
	str=(char *)malloc(n*sizeof(char));
	fflush(stdin);
	gets(str);
	puts(str);
	free(str);
	getch();
}
