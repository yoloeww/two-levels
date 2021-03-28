# include<stdio.h>
int fun(int lim,int a[])
{  
  int i,j,k=0;
  for(i=3;i<=lim;i++)
	  for(j=2;j<lim;j++)
	  {
		  if(i%j==0) 
			  break;
		  if(i==j) 
			  a[k++]=i;
	  }
	 
	  return k;

}
int main(void)
{
	int lim,i;
	int a[i];
	printf("input lim:\n");
	scanf("%d",&lim);
	fun(a[],lim)
	printf("add is %d",m);
	return 0;

}