#include <stdio.h>

int main()
{
    int a[10],i,n;
    int min,max;
    printf("ENTER THE N VALUE:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        min=max=a[i];
    }
    
    for(i=0;i<n;i++)
    
    if(a[i]>max)
    {
      max=a[i];  
    }
     else
    {
        min=a[i];
    }
    printf("\nTHE MAXIMUM VALUE:%d",max);
    printf("\nTHE MINIMUM VALUE:%d",min);

    return 0;
}
