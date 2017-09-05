#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the values of the Integers");
scanf("%d",&a);
if(a<0)
{
printf("The given Values is negative");
}
else if(a>0)
{
printf("The given Value is positive");
}
else
{
printf("The given Values is Zero");
}
getch();
}
