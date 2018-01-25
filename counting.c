#include<stdio.h>
void main()
{
char a[100];
printf("Enter the word");
scanf("%d",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='')
{
count++;
}
printf("The letter in the word is",count);
}
}
