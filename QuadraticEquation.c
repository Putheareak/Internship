/*quadratic Equation*/
#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float x1,x2,re,del,delta;
	printf("Quadratic Equation are Ax^2+Bx+C=0");
	printf("Enter the value of A,B and C:\n");
	scanf("%d%d%d",&a,&b,&c);
	del=pow(b,2);
	re=del-(4*a*c);
	delta=pow(re,0.5);
	if(delta>=0)
	{
	x1=(-b+delta)/(2*a);
	x2=(-b-delta)/(2*a);
	printf("The Root of the Equation is: x1= %2f and x2= %2f",x1,x2);	
	}
	else 
	{
		printf("Delta is less then 0");
	}
}
