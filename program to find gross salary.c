#include<stdio.h>
#include<conio.h>
void  main()
{
int  gs,bs,da,ta;
clrscr();
printf(“enter basic salary: ”);
scanf(“%d”,&bs);
da=(10*bs)/100;
ta=(12*bs)/100;
gs=bs+da+ta;
printf(“gross salary=%d”,gs);
getch();
}
