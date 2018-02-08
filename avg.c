#include <stdio.h>

int main()
{
  int n,i,sum1=0,a[i];
  float avg;
  printf("\n ENTER THE N VALUES:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      sum1=sum1+a[i];
  }
  avg=sum1/n;
  printf("\n%f",avg);
        
    return 0;
}
