#include<stdio.h>
#include<conio.h>
struct data
{
int rn;
char name[10];
}d;
void write()
{
scanf("%d%s",&d.rn,d.name);
}
void read()
{
printf("%d  %s\n",d.rn,d.name);
}
main()
{
char na[20],next='y';
int n,i;
printf("enter file name where you want to store record");
scanf("%s",&na);
FILE *fp;
fp=fopen(na,"a");
while(next=='y')
{
write();
fwrite(&d,sizeof(d),1,fp);
printf("do you want to enter more record press y");
next=getche();
}
printf("records saved\n");
fclose(fp);
fp=fopen(na,"r");
while(fread(&d,sizeof(d),1,fp)==1)
{
read();
}
getch();
}
