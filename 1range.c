#include<stdio.h>
void main()
{
int i,n,count;
printf("ENTER THE NUMBER");
scanf("%d",&n);
for(i=0;i<10;i++)
{
if(i==n)
{
count++;
}
}
if(count==1)
{
printf("YES");
}
else
{
printf("NO");
}
