/*this program is going to check whether that the given number is odd or even*/
#include<stdio.h>
void check(int a);
void main()
{
	int num;
	printf("Enter Your Number You would like to check: ");
	scanf("%d",&num);
	check(num);
}
void check(int a)
{
	if (a%2==0)
	{
		printf("The Number above is Even Number\n");
	}
	else
	{
		printf("The Number above is Odd Number");
	}
}
