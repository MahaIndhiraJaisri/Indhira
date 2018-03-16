#include<stdio.h>
void main()
{
    char a[20];
    int l,d;
    printf("ENTER THE STRING:");
    scanf("%s",&a);
    l=strlen(a);
    d=l/2;
    a[d]='*';
    printf("%s",a);
}
