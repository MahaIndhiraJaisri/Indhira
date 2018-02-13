#include<stdio.h>
void main()
{
int flag,i,n;
printf("ENTER THE VALUE\n");
scanF("%d",&n);
for(i=0;i<n/2;i++)
{
flag=1;
break;
}
if(flag==0)
{
printf("The given number is prime number\n");
}
else
{
printf("The given number is not an the prime number\n");
}
return 0;
}
