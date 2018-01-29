#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(void) 
{
	char b[100];
	int n,j,count=0;
	printf("\nEnter the string: ");
	scanf("%[^\n]%*c",&b);
	for(j=0;b[j]!='\0';j++)
	{
		if(isdigit(b[j]))
		{
			count+=1;
		}
	}
	printf("\nThere a %d digits in the sentence.",count);
	return 0;
}
