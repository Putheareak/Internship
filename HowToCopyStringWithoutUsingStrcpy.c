//how to copy a string without using strcat
#include<stdio.h>
#include<string.h>
main()
{
	char s1[30],s2[30];
	int i;
	printf("Enter any String: ");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	printf("The string after copy from string 1 is : %s",s2);
}
