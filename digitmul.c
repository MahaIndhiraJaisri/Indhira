#include<stdio.h>
void main()
{
    int n,mul=1,b;
    printf("enter the number\n");
    scanf("%d",&b);
    while(b!=0)
    {
        n=b%10;
        mul=mul*n;
        b=b/10;
    }
    printf("%d",mul);
    return 0;
}
