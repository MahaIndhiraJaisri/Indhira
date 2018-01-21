#include<stdio.h>
void main()
{
int i,a,c,b=0;
int d[60];
scanf("%d%d",&a,&c);
for (i=1;i<=a;i++)
{
scanf ("%d",&d[i]);
}
for (i=1;i<=a;i++)
{
b=b+d[i];
}printf("%d",b);
return 0;
}
