// this program will find the frequency of the character
#include<stdio.h>
#include<string.h>
main()
{
	char c[100],ch;
	int i,count=0;
	printf("Enter your String:\n");
	gets(c);
	printf("Enter a string you would like to count:\n");
	scanf("%c",&ch);
	for(i=0;c[i]!='\0';i++)
	{
		if(ch==c[i])
		{
			count++;
		}
	}
	printf("The Letter %c have counted %d",ch,count);
}
