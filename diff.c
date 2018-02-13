#include <stdio.h>
int main()
{
int a,b,d;
printf("ENTER THE FIRST NUMBER\n");
scanf("%d",&a);
printf("ENTER THE SECOND NUMBER\n");
scanf("%d",&b);
d=a-b;
if(d%2==0)
{
    printf("THE GIVEN NUMBER IS EVEN\n");
}
else
{
    printf("THE GIVEN NUMBER IS ODD\n");
}

    return 0;
}
