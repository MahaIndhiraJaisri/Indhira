#include <stdio.h>
#include<string.h>
#include<conio.h>
 int main(void) 
 {
	char a[21];
	printf("\nENTER THE DAY");
	scanf("%s",&a);
	if((a[0]=='s')||(a[0]=='S'))
	{
	    printf("NO");
	}
	else
	{
	    printf("YES");
	}
	return 0;
  }
