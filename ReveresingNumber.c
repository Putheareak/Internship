/*program a reverse number*/
int check(int a); // Function Prototype;
void main()
{
	int num;
	printf("Enter a number you would like to reverse:");
	scanf("%d",&num);
	check(num);     //Function Calling; Passing num to the Function Definition
}
int check(int a)  //Function Definition;
{
	int re;
	while(a!=0)
	{
		re=re*10 + a%10;
		a=a/10;
	}
	printf("The Reverse Number of the Given Number is: %d",re);
}
