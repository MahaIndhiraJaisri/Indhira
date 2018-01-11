#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b;
printf("Enter the starting value");
scanf("%d",&a);
printf("Enter the limit value");
scan("%d",&b);
for(i=a;i<b;i++)
{
if((a%2)==0)
{
printf("The EVEN values%d",i);
}
else
{
printf("The ODD values%d",i);
}
}
}

