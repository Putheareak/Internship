/*checking whether is it a positive or negative*/
#include<stdio.h>
void check(int a);
void main()
{
	int num;
	printf("Enter a Number you would like to check:");
	scanf("%d",&num);
	check(num);
}
void check(int a)
{
	if (a>0)
	{
		printf("Your Number is Positive");
	}
	else if(a==0)
	{
		printf("It neutral");
	}
	else
	{
		printf("Your Number is Negative");
	}
}
