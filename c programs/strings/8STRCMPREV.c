#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
char sor[10],tar[10];

printf("enter first string");
gets(sor);
printf("enter second string");
gets(tar);

printf("%d\t",stricmp(sor,tar));
printf("%s",strrev(sor));
getch();
}

