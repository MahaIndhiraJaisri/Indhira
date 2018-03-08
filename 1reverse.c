#include<stdio.h>
#include<conio.h>
void main()
{
    int n=0,a=0,j=0,b[12],k;
    printf("ENTER THE VALUE\n");
    scanf("%d",&n);
    while(n>0)
    {
      a=n%10;
      n=n/10;
      b[j]=a;
      j++;
    }
    for(k=0;k<j;k++)
    {
        printf("%d",b[k]);
    }
}
