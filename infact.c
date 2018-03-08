#include<stdio.h>
#include<conio.h>
void main()
{
    int a,fact=1,i;
    printf("ENTER THE VALUE\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("THE FACTORIAL VALUE:%d",fact);
}
