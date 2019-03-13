/*program that find the given value is palindrome or not*/
int com(int a,int b);
void main()
{
	int num,re,orinum;
	printf("Enter Your Number You Would Like to Check:");
	scanf("%d",&num);
	orinum=num;
	while(num!=0)
	{
		re= re*10 + num%10;
		num/=10;	
	}
	if(re==orinum)
	{
		printf("The Number Above is a Palindrome");
	}
	else
	{
		printf("The Number Above in not a Palindrome Number");
	}
}
