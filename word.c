#include<stdio.h>
void main()
{
char a[39];
int i,count=0,length=0;
printf ("ENTER THE WORD");
scanf("%d",&a);
length=strlen(a);
for(i=0;i<length;i++)
{
if((a[i]!=='')&&a[i+1==''])
{
word=word+1;
count++;
}
}
printf(THE WORDS TOTAL SPACE IS%d",word);
}
