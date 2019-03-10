/*find an area of a rectangle*/
#include<stdio.h>
int cal(int x,int y);
int main()
{
	int a,b,area;
	printf("Enter the length:");
	printf("Enter the width:");
	scanf("%d %d",&a,&b);
	area=cal(a,b);
	printf("The area of rectangle is %d squad meter",area);	
	return 0;
}
int cal(int x,int y)
{
	int cal;
	cal=(x+y)*2;
	return cal;
}
