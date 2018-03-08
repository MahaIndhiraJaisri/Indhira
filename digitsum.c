#include <stdio.h>
#include<conio.h>
 int main(void) 
 {
int n,k,a=0,i,sum1=0;
printf("ENTER THE NUMBER\n");
scanf("%d",&n);
while(n!=0)
{
    a=n%10;
    sum1=sum1+a*a;
    n=n/10;
}
printf("%d",sum1);
}
