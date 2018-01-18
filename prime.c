#include<stdio.h>
void main()
{
int flag,i,n;
printf("Enter the value");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if((n%i)==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("The number is prime");
}
else
{
printf("The number is not prime");
}
}
