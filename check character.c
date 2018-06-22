#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("enter any character\n");
	scanf("%c",&ch);
	(ch=(ch>=97&&ch<=122)?printf("\nlowercase"):(ch=(ch>=65&&ch<=90)?printf("\nuppercase"):(ch=(ch>=48&&ch<=57)?printf("\ndigits"):(ch=((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))?printf("\nspecial symbool"):printf("none")))));

	
}