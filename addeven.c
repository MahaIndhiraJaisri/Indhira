#include <stdio.h>
int main()
{
int a,b,d;
printf("ENTER THE VALUE1\n");
scanf("%d",&a);
printf("ENTER THE VALUE2\n");
scanf("%d",&b);
d=a+b;
if(d%2==0)
{
    printf("THE GIVEN VALUE IS EVEN\n");
}
else
{
    printf("THE GIVEN VALUE IS ODD\n");
}

    return 0;
}
