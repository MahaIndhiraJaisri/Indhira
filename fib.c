#include<stdio.h>
void main()
{
int f1=0,s=1,N,i,temp;
scanf("%d",&N);
printf("FIBONACCI SERIES....");
printf("%d%d",f1,s);
for(i=2;i<=N;i++)
{
temp=f1+s;
f=f1+s;
s=s+temp;
printf("%d",temp);
}
}
