# include<stdio.h>
# define N 100
void fun (char a[]);
void fun (char a[])
{
	char *p;
	p=&a[0];
	while(*p=='*')
		p++;
	for(;*p!='\0';a++,p++)
	{
	   *a=*p;
	}
	*a='\0';
}
int main(void)
{
   char a[N];
   printf("input a char:\n");
   gets(a);
   fun(a);
   printf("new char is:");
   puts(a);
   return 0;
}