#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
printf("Enter the n values");
scanf("%d",&n);
while(n>0)
{
n=n/10;
count++;
}
printf("%d",count);
}
