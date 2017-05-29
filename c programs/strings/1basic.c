//PROGRAM TO INPUT AND DISPLAY A STRING ENTERED BY THE USER
#include<conio.h>
#include<stdio.h>
void main()
{
      char name[20];
      printf("enter the name of the person :\n");
      //scanf("%s",&name);
      gets(name);
      //printf("\nName entered was :%s",name);
      puts(name);
      getch();
      }
