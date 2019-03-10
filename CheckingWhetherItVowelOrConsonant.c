/*This Program will check wether the given character is consonant or vowel*/
#include<stdio.h>
main(){
	char a;
	printf("Enter a alphabet that you would like to check:");
	scanf("%c",&a);
	if (a=='a'||a=='A'||a=='i'||a=='I'||a=='o'||a=='O'||a=='e'||a=='E'||a=='u'||a=='U')
	{
		printf("The Alphabet above is a Vowel");
	}
	else
	{
		printf("The Alphabet above is a Consonant");
	}
}
