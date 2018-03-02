#include<stdio.h>
void main()
{
	float si,p,rate,t;
	printf("Enter the Principal value:");
	scanf("%f",&p);
	printf("Enter the Rate:");
	scanf("%f",&rate);
	rate=rate/100;
	printf("Enter the Time:");
	scanf("%f",&t);
	si=p*(rate*t);
	printf("%f",si);
}
