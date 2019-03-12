/*check the number whether it prime or not*/
void check(int a);
main()
{
	int num;
	printf("Enter The Number You Would to check: ");
	scanf("%d",&num);
	check(num);
}
void check(int a)
{
	int i,flag=0;
	if(a<=1)
	{
		printf("The number is not a prime number");
		exit(0)	;
	}
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("The Number Above is a prime.");
	}
	else
	{
		printf("The Number is not a prime number.");
	}
	
}
