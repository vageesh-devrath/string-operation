#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void uplow(char s[]);
int main() 
{
	char a[100];
	printf("Enter a string");
	gets(a);
	puts(a);
	uplow(&a);
	
	puts(a);
	return 0;
}
void uplow(char *s)
{
	int i;
	while(*s!='\0')
	{
		if((*s>='A')&&(*s<='Z'))
		{
		*s=-('A'-*s)+'a';
	}
	   else if((*s>='a')&&(*s<='z'))
	*s=*s-'a'+'A';
		else;
		s++;
	}
	
}
