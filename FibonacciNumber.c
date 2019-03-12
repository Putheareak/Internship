/*Program will print the fibonacci series up to a rang of 50*/
main()
{
	int arr[55],i;
	printf("Your First 2 Number is 0 and 1\n");
	arr[0]=0;
	arr[1]=1;
	printf("%d\n",arr[0]);
	for(i=0;i<50;i++)
	{
		arr[i+2]=arr[i]+arr[i+1];
		printf("%d\n",arr[i+2]);
	}
}
