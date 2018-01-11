#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
{
printf("Enter the starting value");
scanf("%d",&a);
printf("Enter the ending limit");
scanf("%d",&b);
for(i=a;i<b;i++)
{
if((a%2)!=0)
{
printf("The odd values are%d",i);
}
}
}
}
