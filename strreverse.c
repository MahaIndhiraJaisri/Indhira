#include<stdio.h>
#include<conio.h>
void main()
{
char a[12];
printf("ENTER THE STRING:\n");
gets(a);
if(a=strrev(a))
{
printf("YES");
}
else
{
printf("NO");
}
}
