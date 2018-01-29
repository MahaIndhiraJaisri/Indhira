#include<stdio.h>
int main()
{
char str[20];
int len,i,sum1=0;
printf("Enter the string");
scanf("%s",str);
len=strlen(str);
for(i=0;i<l;i++)
{
  if(str[i]=='@'||str[i]=='*'||str[i]=='.'||str[i]=='#'||str[i]=='&'||str[i]=='^')
  {
    sum1=sum1+1;
  }
}
printf("Special character:%d",sum);
return 0;
}
