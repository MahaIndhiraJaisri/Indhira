#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,gcd,i,lcm;
    printf("ENTER THE VALUE1:\n");
    scanf("%d",&n1);
    printf("ENTER THE VALUE2:\n");
    scanf("%d",&n2);
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            gcd=i;
        }
            }
            lcm=(n1*n2)/gcd;
        printf("\nTHE GCD VALUE IS:%d",lcm);
    }
    
