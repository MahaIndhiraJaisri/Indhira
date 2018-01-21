#include<stdio.h>
int main()
{
int n,k,i,temp,num,rem;
printf("enter the numbers: ");
scanf("%d%d",&n,&k);
printf("armstrong no between %d and %d are:",n,k);
for(i=n+1;i<k;++i)
{
temp=i;
num=0;
while(temp!=0)
{
rem=(temp%10);
num+=rem*rem*rem;
temp/=10;
}
if(i==num)
{
printf("%d",i);
}
}
return 0;
}
