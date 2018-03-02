#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("ENTER THE NUMBER:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%d",sum);

    return 0;
}
