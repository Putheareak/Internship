/*this program will find the biggest value among 3 number*/
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value For A,B,C:\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		if(a>c)
		{
			printf("The Biggest Value is A");
		}
		else
		{
			printf("The Biggest Value is C");
		}
	}
	else
	{
		if(b>c)
		{
			printf("The Biggest Value is B");
		}
		else
		{
			printf("The Biggest Value is C");
		}
	}
}
