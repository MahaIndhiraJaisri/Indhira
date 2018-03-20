#include<stdio.h>
#include<conio.h>
void main()
{
int count=0,n,i;
int m,p;
printf("ENTER THE NUMBER:");
scanf("%d",&n);
while(n!=0)
{
n=n/2;
count++;
}
for(i=0;i<count+1;i++)
{
m=m*p;
}
printf("THE VALUE:%d",m);
}
