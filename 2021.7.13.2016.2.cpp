# include<stdio.h>
# include<string.h>
int replace(char *p)
{
  int f=0;
  while(*p!='\0')
   {
       if(*p=='h'&&*(p+1)=='e'&&*(p+2)=='r')
	   {
		   *p='s';
		   *(p+1)='h';
		   *(p+2)='e';
		   f=1;
	   } 
	   p++;
   }
  return f;
}
int main (void)
{
	char p[100];
	printf("input p:\n");
    gets(p);
	if (replace(p))
	puts(p);
	else
		printf("error");
	return 0;
   
}