# include<stdio.h>
int fun (char *p);
int fun (char *p)
{  
   int x=0;
   while(*p!='\0')
   {
     x=*p-'0'+10*x;
	 p++;
   }
   return x;
}
int main(void)
{
  char a [222];
  printf("input one char:\n");
  gets(a);
  int k=fun(a);
  printf("%d",k);
  return 0;
}