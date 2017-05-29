#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
char s1[20],s2[10];
printf("enter string");

gets(s1);
gets(s2);
printf("first string = %s",s1);
strncpy(s2,s1,3);
printf("\nsecond string = %s",s2);
getch();
}
