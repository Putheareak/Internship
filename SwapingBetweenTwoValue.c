/*this program will swap tow value of your given input*/
#include<stdio.h>
int swap(int x,int y,int z);
main()
{
	int a,b,c=0;
	printf("Enter the first value:\n");
	scanf("%d",&a);
	printf("Enter the secon value:\n");
	scanf("%d",&b);
	printf("Before Swap first value = %d and second value = %d\n",a,b);
	swap(a,b,c);
  return 0;
}
int swap(int x,int y,int z)
{
	z=x;
	x=y;
	y=z;
	printf("After swap first value = %d and second value = %d",x,z);
}



