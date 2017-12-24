#include<stdio.h>
int main()
{
char c;
printf("Enter the alphabets");
scanf("%c",&c);
if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z'))
printf("Given is Alphabets");
else
printf("Given is not Alphabets");
}
