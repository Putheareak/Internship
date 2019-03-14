/*program will find whether the given number is a Armstrong Number or Not*/
#include<stdio.h>
#include<math.h>
void main()
{
	int num,orgnum,pro,re;
	printf("Enter The Number You Would Like to check:");
	scanf("%d",&num);
	orgnum=num;
	while(num!=0)
	{
		re=num%10;
		pro=pro+pow(re,3);
		num/=10;
	}
	if (orgnum==pro)
	{
		printf("The Number Above is a Palindrome Number.");
	}
	else
	{
		printf("The Number Above is not a Palindrome Number.");
	}
	
}
