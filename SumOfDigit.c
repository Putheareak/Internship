#include<stdio.h>
/*program will find the sum of the digit*/
void main()
{
	int num,re,sum;
	printf("Enter Your Number : ");
	scanf("%d",&num);
	while (num!=0)
	{
		re=num%10;
		sum=sum+re;
		num/=10;
	}
	printf("The Total Sum of Digit Number is : %d",sum);
}
