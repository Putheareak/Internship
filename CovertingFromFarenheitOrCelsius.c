/*convert a celsius to fahrenheit*/
#include<stdio.h>
int cel(float a);
int fah(float b);
int main(){
	int i;
	float res,c,f;
	printf("1/Celsius to Fahrenheit\n");
	printf("2/Fahrenheit to Celsius\n");
	printf("Enter 1 or 2:");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Enter the Celsius: ");
		scanf("%f",&c);
		res=fah(c);
		printf("Celsius %f= Fharenheit %f",c,res);	
	}
	else if(i==2)
	{
		printf("Enter the Fahrenheit:");
		scanf("%f",&f);
		res=cel(f);
		printf("Fahrenheit %f = Celsius %f",f,res);
	}
	else
	{
		printf("Please enter the right number !!!!-_-");
	}
	
}
int fah(float b)
{
	float fah;
	fah=(b*(9/5))+32;
	return fah;
}
int cel(float a)
{
	float cel;
	cel=(a-32)*(5/9);
	return cel;
}



