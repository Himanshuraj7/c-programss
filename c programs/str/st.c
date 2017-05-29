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
char na[20];
int n,i;
printf("enter file name where you want to store record");
scanf("%s",&na);
FILE *fp;
fp=fopen(na,"w");
printf("how many records you want to save");
scanf("%d",&n);
for(i=0;i<n;i++)
{
write();
fwrite(&d,sizeof(d),1,fp);
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
