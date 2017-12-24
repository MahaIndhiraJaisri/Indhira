#include<stdio.h>
int main()
{
char c;
printf("Enter the character");
scanf("%c",&c);
if((c=='a')||(c=='A')||(c=='e')||(c=='E')||(c=='i')||(c=='I')||(c=='o')||(c=='O')||(c=='u')||(c=='U'))
{
    printf("The given number is vowels");
}
else
{
    printf("The given number is constant");
}
}
