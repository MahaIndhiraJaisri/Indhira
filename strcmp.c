#include <stdio.h>

int main()
{
    char str1[10];
    char str2[10];
    int count1=0,count2=0,i;
    printf("ENTER THE FIRST STRING\n");
    scanf("%s",&str1);
    printf("ENTER THE SECOND STRING\n");
    scanf("%s",&str2);
    
    for(i=0;str1[i]!=0;i++)
    {
        count1++;
    }
    for(i=0;str2[i]!=0;i++)
    {
        count2++;
        }
        if(count1>=count2)
        {
            printf("%s",str1);
        }
        else
        {
            printf("%s",str2);
        }
    return 0;
}
