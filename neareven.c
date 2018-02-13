#include <stdio.h>

int main()
{
int n,a;
printf("ENTER THE NUMBER\n");
scanf("%d",&n);
a=n-1;
if(a%2==0)
{
    printf("THE GIVEN NUMBER IS EVEN:%d\n",a);
}
else
{
printf("THE NEAREST OF THE EVEN NUMBER:%d",a-1);
}
    return 0;
}
