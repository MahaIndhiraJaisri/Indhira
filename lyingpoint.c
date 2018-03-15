#include <stdio.h>

int main()
{
    int x,x2,x3,y,y2,y3;
    printf("ENTER THE  FIRST POINT VALUE1:\n");
    scanf("%d%d%d",&x,&x2,&x3);
    printf("ENTER THE SECOND POINT VALUE2:\n");
    scanf("%d%d%d",&y,&y2,&y3);
    if(x==x2==x3||y==y2==y3)
    {
        printf("THE POINTS LIES ON THE SAME LINE\n");
    }
    else
    {
       printf("THE POINTS DOES NOT LIES ON THE SAME LINE\n"); 
    }

    return 0;
}
