# include<stdio.h>
# define N 10
int fun(int x[],int e,int *sum);
int fun(int x[],int e,int *sum)
{
  int i,num=0;
  *sum=0;
  for(i=0;i<N;i++)
	  if(x[i]%e==0)
		  num++;
	  else *sum=*sum+x[i];
	  return num;
}
int main(void)
{
	int x[N]={2,4,56,5,3,34,63,24,34},e=3,n,sum;
	n=fun(x,e,&sum);
	printf("n=%d,sum=%d\n",n,sum);
	return 0;
}