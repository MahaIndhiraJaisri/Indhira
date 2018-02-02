#include<stdio.h>
void main()
{
int n,i,c=0;
printf("ENTER THE POWER VALUE\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(n==pow(2,i))
{
printf("YES");
c++;
break;
}
}
