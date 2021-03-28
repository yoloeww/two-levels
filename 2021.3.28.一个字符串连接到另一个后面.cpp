# include<stdio.h>
# define N 100
void fun(char *a,char *b)
{
	while(*a!=0) 
		a++;
	while(*a++=*b)
		b++;
	   }
int main(void)
{
     char a[N];
     char b[N],c[N];
	 printf("input a:\n");
	 gets(a);
	 printf("input b:\n");
	 gets(b);
     fun(a,b);
	 puts(a);
}