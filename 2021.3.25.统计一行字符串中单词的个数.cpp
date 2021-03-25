#include<string.h>
#include<stdio.h>
#define N 80
int fun(char *s)
{   int i,k=0;
	
	for(i=0;*s!='\0';i++,s++)
	{
		if(*s!=' '&&(*(s+1)==' '||*(s+1)=='\0'))
			k++;
	
	}
	return k;
}
int main(void)
{
    char s[100];
	printf("input some words:\n");
	gets(s);
	int m=fun(s);
	printf("add have %d word",m);
	return 0;
	
}