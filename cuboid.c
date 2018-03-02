#include <stdio.h>

int main()
{
    int l,b,h,vol,surface;
    printf("ENTER THE LENGTH:BREADTH:HEIGHT:\n");
    scanf("%d%d%d",&l,&b,&h);
    vol=l*b*h;
    surface=(2*l*b)+(2*l*h)+(2*b*h);
    printf("\nTHE VOLUME:%d",vol);
    printf("\nTHE SURFACE:%d",surface);
    return 0;
    
}



