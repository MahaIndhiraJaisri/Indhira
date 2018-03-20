#include<stdio.h>
void main()
{
int m,i,count=0;
scanf("%d",&m);
for(i=1;i<=m;i++)
{
if((m%i)==0)
{
count++;
}
}
if(count==0)
{
printf("no,not a composite");
}
else
{
printf("yes, composite");
}
}
