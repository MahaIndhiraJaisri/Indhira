#include<stdio.h>
void main()
{
int low,high,i,j,count=0;
printf(Enter the value");
scanf("%d%d",&low,&high);
for(i=low;i<=high;i++)
{
for(j=2;j<i;j++)
{
count++;
}
}
if(count==0)
{
printf("prime number %d',count);
}
count=0;
}
