#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
char s1[10],s2[10];
puts("enter text 1");
gets(s1);
puts("enter text 2");
gets(s2);
strcat(s2,s1);
printf("%s",s2);
getch();
}   

