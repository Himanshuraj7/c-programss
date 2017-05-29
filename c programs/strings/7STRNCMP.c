#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
char sor[10],tar[10];
int diff,n;
printf("enter first string");
gets(sor);
printf("enter second string");
gets(tar);
printf("enter length upto which comp is made");
scanf("%d",&n);
diff =strnicmp(sor,tar,n);
if (diff ==0)
printf("strings are same upto %d characters",n);
else
puts("two strings are different");
//printf("%s %s %d %d",sor,tar,n,strnicmp(sor,tar,n));
getch();
}
