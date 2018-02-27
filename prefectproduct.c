#include<stdio.h>
#include<math.h>
void main()
{
int n1,n2,i,pro1;
printf("enter the numbers");
scanf("%d%d",&n1,&n2);
pro1=n1*n2;
for(i=0;i<(pro1/2);i++)
{
if(pow(i,2)==pro1)
{
printf("product is perfect square");
break;
}
}
}
