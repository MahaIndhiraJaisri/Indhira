#include<stdio.h>
void main()
{
int fact=1,a,i;
printf("Enter the value");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
fact=fact*i;
}
printf("THE FACTORIAL VALUE IS%d\t",fact);
}
