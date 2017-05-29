#include<stdio.h>
#include<conio.h>
main()
{
char ch;
FILE *p;
p=fopen("text1.txt","w");
fputc('v',p);

printf("record saved");
getch();
}
