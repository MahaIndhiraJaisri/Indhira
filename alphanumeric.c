#include<stdio.h>
int main()
{
char a[50],s[35];
int i;
int digit=0,num=0;
scanf("%s",a);
for(i=0;s[i]!='\0';i++)
{
 if(s[i]>='0'&&s[i]<='9')
 digit++;
 if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
 num++;
}
if(num>=0)
{
    if(digit>=0)
    {
printf("\nYES");
}
}
return 0;
}
