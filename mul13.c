#include<stdio.h>
void main()
{
int n;
printf("ENTER THE NUMBER\n");
scanf("%d",&n);
if((n%13)==0)
{
    printf("THE GIVEN NUMBER IS MULTIPLE OF 13\n");
}
else
{
    printf("THE GIVEN NUMBER IS NOT MULTIPLE OF 13\n");
}
}
