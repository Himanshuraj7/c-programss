#include<stdio.h>
#include<conio.h>
  main(){
	int a,b,c;
	printf("input the 3 nos=");
	scanf("%d%d%d",&a,&b,&c);
	(a>b && a>c)?printf("a"):(b>c)?printf("b"):printf("c");
	
}
