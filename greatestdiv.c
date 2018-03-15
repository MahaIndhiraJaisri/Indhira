#include <stdio.h>

int main()
{
    int a,b,i,u;
    printf("ENTER THE VALUE1:\n");
    scanf("%d",&a);
    printf("ENTER THE VALUE2:\n");
    scanf("%d",&b);
    for(i=1;i<=a&&i<=b;i++)
    {
    if(a%i==0&&b%i==0)
        {
            u=i;
        }
    }
    printf("\nTHE GREATEST VALUE DIVIDE BY BOTH NUMBER IS:%d",u);

    return 0;
}
