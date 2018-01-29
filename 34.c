#include <stdio.h>
#include<string.h>
int main(void)
{
    char a[100];
    int m,i,count=0;
	printf("\nEnter the sentence : ");
	scanf("%[^\t]%*c",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='\n')
		{
			count++;
		}
	}
	printf("\nThere are %d lines in the paragraph.",count);
	return 0;
}
