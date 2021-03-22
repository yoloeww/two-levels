# include<stdio.h>
int fun (int a);
int fun (int a)
{
    int i,sum=0;
	for(i=2;i<a-1;i++)
	{
		if(a%i==0&&a<=1000)
			sum+=i;
	}
    return sum;
}
int main(void)
{
   int n;
   printf("input a number:\n");
   scanf("%d",&n);
   int k=fun(n);
   printf("factor=%d\n",k);
   return 0;
}