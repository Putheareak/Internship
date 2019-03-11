/*checking for leap year*/

#include<stdio.h>

void check(int a);
int main()
{
	int year;
	printf("Enter a year you would like to check: ");
	scanf("%d",&year);
	check(year);
	return 0;
}

void check(int a)
{
	if (a%400==0)
	{
		printf("%d is a leap year",a);
	}
	else if(a%100==0)
	{
		printf("%d is not a leap year",a);
	}
	else if(a%4==0)
	{
		printf("%d is a leap year",a);
	}
	else
	{
		printf("%d is not a leap year");
	}
}
