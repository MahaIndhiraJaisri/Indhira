#include<stdio.h>
void main()
{
int a[i],min;
printf("Enter the N value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
printf("The minimum value is %d",min);
}
