#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
    char a[20] = "abcdefdgh";
    char b[10] = "df";
    char c='d';
   printf("The substring is: %s\n", strstr(a,b));
printf("The substring is: %s\n", strrchr(a,c));
   getch();
   
   return(0);
}
