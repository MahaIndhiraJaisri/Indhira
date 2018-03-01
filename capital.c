#include <stdio.h>

int main()
{
    char name[20];
    int i;
    scanf("%s",&name);
    for(i=0;name[i]!='\0';i++)
{
    if(name[i]>='a'&&name[i]<='z')
    {
        printf("%c",name[i]-32);
    }
    else
    {
        printf("%c",name[i]);
    }
}
    return 0;
}
