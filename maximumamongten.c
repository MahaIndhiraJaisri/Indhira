#include <stdio.h>

int main()
{
    int a[10],i,j,max1;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
            }
            max1=a[0];
    for(j=1;j<10;j++)
    {
        if(max1<a[j])
        {
            max1=a[j];
        }
    }
    printf("MAXIMUN VALUE IS:%d",max1);

    return 0;
}
