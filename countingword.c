#include<stdio.h>
#include<conio.h>
void main()
{
    int i,count=1;
    char a[23];
    printf("ENTER THE STRING\n");
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    printf("THE WORDS IN THE STRING:%d",count);
}
