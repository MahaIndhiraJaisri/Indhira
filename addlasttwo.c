#include<stdio.h>
void main()
{
    int n1,num,i,sum=0;
    printf("ENTER THE N VALUE:\n");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("THE ADDITION VALUE OF LAST TWO DIGITS:%d",sum);
}
