#include<stdio.h>
#include<conio.h>
void main()
{
int i,num;
printf("enter the value of num");
scanf("%d",&num);
clrscr();
long int fact=1;
for(i=num;i>=1;i--)
fact=fact*i;
printf("%d",fact);
getch();
}

