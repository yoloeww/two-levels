#include <stdio.h>
#define N  3
void fun( int a[N][N],int *p)
{
	int i,j,k=0;
	for(i=0;i<N;i++)
	{
			p[k++]=a[i][i]*2;
	}
	for(i=0;i<N;i++)
	{ 
		p[k++]=a[i][N-i-1]*3;
	}
	      
}
int main(void)
{int a[N][N],p[2*N];
  int i,j;
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
scanf("%d",&a[i][j]);
}
fun (a,p);
for(i=0;i<2*N;i++)
printf("%d",p[i]);
return 0;
}