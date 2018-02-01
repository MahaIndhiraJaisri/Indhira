#include<stdio.h>
void main()
{
int t1,t2;
printf("ENTER THE t1\n");
scanf("%d",t1);
printf("ENTER THE t2\n");
scanf("%d",t2);
t1=t2;
t2=t1;
printf("\nBEFORE SWAPPING VALUE:%d %d",t1,t2);
printf("\nAFTER SWAPPING VALUE :%d %d",t2,t1);
}
