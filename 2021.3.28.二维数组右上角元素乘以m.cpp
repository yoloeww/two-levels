# include<stdio.h>
# define N 3
void  fun(int a[][N],int m)
{
   int i ,j;
   for(i=0;i<N;i++)
   {
	   for(j=i;j<N;j++)
		   a[i][j]=a[i][j]*m;
   }

}
int main(void)
{
 int a[N][N],i,j;
 for(i=0;i<N;i++)
 {
	 for(j=0;j<N;j++)
		 scanf("%d",&a[i][j]);
 }
fun(a,4);
for(i=0;i<N;i++)
{
	 for(j=0;j<N;j++)
		 printf("%5d",a[i][j]);
	 putchar('\n');
}
	 return 0;
}