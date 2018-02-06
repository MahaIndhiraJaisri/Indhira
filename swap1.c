#include <stdio.h>

int main()
{
int n,m,t;
scanf("%d%d",&n,&m);
t=n;
n=m;
m=n;
printf("%d %d",t,m);
return 0;
}
